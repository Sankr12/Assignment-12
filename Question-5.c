#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,a=1,k,c,space;
    for(i=1;i<=4;i++)
        {
            a=1;
            for(space=1;space<=4-i;space++)
            {
                printf(" ");
            }
            for(j=1;j<=i;j++)
            {
                printf("%d",a++);
            }
            c=i-1;
            for(k=1;k<=i-1;k++)
            {
                printf("%d",c--);
            }
            printf("\n");
        }
    getch();
}


