#include<stdio.h>
#include<string.h>

// Function to check if string is a Palindrome or not

bool palindrome(char* s)
{
  if (strlen(s) == 0)
  {
    return true;
  }
  int i, j;
  i = 0;
  j = strlen(s) - 1;
  while (i < j)
  {
    if (tolower(s[i]) == tolower(s[j]))
    {
      i++;
      j--;
    }
    else if (isalpha(s[i]) == false && isdigit(s[i]) == false)
    {
      i++;
    }
    else if (isalpha(s[j]) == false && isdigit(s[j]) == false)
    {
      j--;
    }
    else
    {
      return false;
    }
  }
  return true;
}

int main(){

        char* str[1000];

        printf("Enter String: ");

        // Input the String
        fgets(str, 1000, stdin);

        if(palindrome(str)){
            printf("true");
        }
        else{
            printf("false");
        }

        return 0;
}

