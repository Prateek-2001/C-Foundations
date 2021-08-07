#include <stdio.h>
#include <stdbool.h>

//Function that deletes each character in s1 that matches any character in the string s2
void squeeze(char *s1, char *s2)
{
    //Ascii 0-255
    bool isPresent[256];

    memset(isPresent, 0, sizeof(isPresent)); 
    
    int pos = 0;
    while (s2[pos] != '\0')
    {
        isPresent[s2[pos++]] = 1;
    }

    pos = 0;
    int realPos = 0; 
    while (s1[pos] != '\0')
    {
        //if character is not present in s2
        if (!isPresent[s1[pos]])
        {
            s1[realPos] = s1[pos];
            realPos++;
        }
        pos++;
    }
    //End of the String
    s1[realPos] = '\0'; 
}

int main()
{
    char string1[1000], string2[1000];

    printf("Enter the first string: ");
    scanf("%[^\n]%*c", string1);

    printf("Enter the second string: ");
    scanf("%[^\n]%*c", string2);

    squeeze(string1, string2);

    printf("%s", string1);
}