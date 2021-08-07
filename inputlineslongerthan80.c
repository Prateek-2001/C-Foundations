
#include <stdio.h>
#include <conio.h>
int main()
{
       int m=0, i;
       char string[1000], ch;

       printf("Enter data: ");
       i=0;
       while(ch!=27)
       {
        ch=getche();
        string[i]=ch;
        if(ch==13)
            {
            printf("\n");
            if(i>=80)
            {
            printf("This line is greater than 80 charachters.\n");
            for(m=0; m<=i; m++)
                {
                printf("%c", string[m]);
                }
            printf("\n");        
            }
        i=0;
        }
        i++;
       }
    getch();
}
