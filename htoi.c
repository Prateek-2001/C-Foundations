#include <stdio.h>

//This returns integer value of character in hexadecimal
int getValue(char c)
{

    //already an integer
    if (c <= '9')
        return c - '0';

    //uppercase alphabet
    if (c <= 'Z')
        return c - 'A' + 10;

    //lowercase alphabet
    return c - 'a' + 10;
}

//This returns decimal format of hexidecimal string s
int htoi(char *s)
{
    //calculating the length of the string
    int length = 0;
    while (s[length] != '\0')
    {
        length++;
    }

    //calculating the integer until x
    int exponent = 1, decVal = 0;
    for (int i = length - 1; i >= 0 && s[i] != 'X' && s[i] != 'x'; i--)
    {
        decVal += exponent * getValue(s[i]);
        exponent *= 16;
    }

    return decVal;
}

int main()
{
    char string[1000];

    printf("Enter the hexadecimal string: ");
    scanf("%s", string);

    printf("%d\n", htoi(string));
}