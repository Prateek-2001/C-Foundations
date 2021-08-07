# C-Foundations
C language and basics like Data types, Expressions, Control Statements, Arrays, Strings and Functions

1.	Write a C program to swap two numbers without using a third variable. <br />
Input: a = 10, b = 5 <br />
Output: a = 5, b = 10 <br />

2.	Write a C program to print a pyramid having a given number of  steps. <br />
Input: 5    <br />
Output: <br />
    # <br />
   # # <br />
  # # # <br />
 # # # # <br />
# # # # # <br />

3.	Write a C program to find the count of the number of vowels and consonants in the given string. (Update - Consider spaces and special characters as consonants)<br />
Input: str = "C Course" <br />
Output: Vowels= 3, Consonants=5 <br />

4.	Write a C Program to reverse the given 1 D array. Create a function for the reversal process. <br />
Input: array = [1,2,3,4,5] <br />
Output: [5,4,3,2,1] <br />

5.	Write a C program to multiply the given 2 matrices. <br />
Input: <br />
Size = 2 <br />
Matrix1 = [[1,2],[3,4]] <br />
Matrix2 = [[1,1],[1,1]] <br />

Output: <br />
Matrix = [[3, 3],[7, 7]]

6.	Write a C program to check if the given string is palindrome or not, considering only alphanumeric characters and ignoring cases

Input: str = “Never Odd or Even”

Output = true

7.	Write a program to print all input lines that are longer than 80 characters

Input: A text file with lines of varying length 

Output: print all lines with length greater than 

8.	Write a function reverse(char* s)  that reverses the character string

Input: “hello world”

Output: “dlrow olleh”

9.	Write the function htoi(char* s), which converts a string of hexadecimal digits (including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0 through 9, 11 through f, and A through F

Input: “0xa”

Output: 10

10.	Write an alternate version of squeeze(char*s1 , char* s2) that deletes each character in s1 that matches any character in the string s2.

Input: s1 = “abcd” s2 = “bc”

Output: “ad”

11.	Write the function any( char* s1 , char* s2), which returns the first location in the string1 where any character from the string2 occurs, or  -1 if s1 contains no characters from s2

Input: s1 = “abcd” s2 = “kd”

Output: 3


Input: s1 = “abcd” s2 = “kz”

Output: -1

12.	Write the function strrindex( char* s , char* t ) which returns the position of the rightmost occurrence of t in s , or - 1 if there is none

Input: s = “abkdcdddkd” t = “kd”

Output: 8

Input: s = “abcd” t = “kd”

Output: -1

13.	Write the function strend(char *s , char* t) , which returns 1 if the string t occurs at the end of the string s, and zero otherwise

Input: s = “abkdcdddkd” t = “kd”

Output: 1

Input: s = “abcd” t = “kd”

Output: 0

14.	Write the versions of the library functions strncpy, strncat, and strncmp, which operate on at most the first n characters of their argument strings. For example, strncpy (char *s, char*  t , size_t n) copies at most n characters of t to s

15.	Write the program expr, which evaluates a reverse Polish expression from the command line, where each operator or operand is a separate argument. For example, expr 2 3 4 + * evaluates 2 * (3 + 4)
