#include<stdio.h>

//Function to count Vowels and Consonants
void vowelsandconsonants(char* str){

        int vowels = 0;
        int consonants = 0;

        char ch;

        for (int i=0; str[i] != '\0'; i++){

                ch = str[i];

                //Check if it is a vowel
               if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
                        vowels++;
                }
                
                // Else it is a consonant
                else{
                        consonants++;
                }
        }
        printf("Vowels = %d  ", vowels);
        printf("Consonants = %d", consonants-1);
}


int main(){

        char* str[1000];

        printf("Enter String:");

        fgets(str, 1000, stdin);

        vowelsandconsonants(str);

        return 0;

}

