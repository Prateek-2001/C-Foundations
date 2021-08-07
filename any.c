#include <stdio.h>
#include <stdbool.h>

//Function to return first location in string1 where any character from string 2 occurs else -1
int any(char *s1, char *s2)
{
    //considering any character with ascii 0-255 can be present in the given string
    bool isPresent[256];
    
    memset(isPresent, 0, sizeof(isPresent)); 

    //checking the characters in s2 in isPresent array
    int pos = 0; 
    while (s2[pos] != '\0')
    {
        isPresent[s2[pos++]] = 1;
    }

    pos = 0;
    while (s1[pos] != '\0')
    {
        //if present in s2 then return current position
        if (isPresent[s1[pos]])
        {
            return pos;
        }
        pos++;
    }
    // no character
    return -1; 
}

int main()
{
    char string1[1000], string2[1000];

    printf("Enter the first string: ");
    scanf("%[^\n]%*c", string1);

    printf("Enter the second string: ");
    scanf("%[^\n]%*c", string2);

    printf("%d", any(string1, string2));
}