#include <stdio.h>

int main()
{
    int i, j, rows, k=0;

    printf("Enter the number of rows : ");
   
    scanf("%d", &rows);

    // Loop to go through every row of the Pyramid
    for(i=1; i<=rows; i++)
    {
        // Loop to add empty space and keep it centered
        for(j=1; j<=(rows-i); j++)
            printf("  ");

        //Loop to print the stars
        while(k!=(2*i-1))
        {
            printf("* ");
            k++;
        }

        k=0;

        //Moving to the next row 
        printf("\n");
    }

    return 0;
}
