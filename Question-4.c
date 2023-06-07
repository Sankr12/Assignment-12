#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,space;
    for(i=1;i<=4;i++)
        {
            for(space=1;space<=4-i;space++)
            {
                printf(" ");
            }
            for(j=1;j<=i;j++)
            {
                printf("*");
            }

            for(k=1;k<=i-1;k++)
            {
                printf("*");
            }
            printf("\n");
        }
    getch();
}


