#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,a,b,c,l,space,k;
    for(i=1;i<=3;i++)
    {
        for(space=1;space<=3-i;space++)
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
    for(a=1;a<=3;a++)
    {
        for(l=1;l<=a;l++)
        {
            printf(" ");
        }
        for(b=1;b<=3-a;b++)
        {
            printf("*");
        }
        for(c=1;c>=a;c--)
        {
            printf("*");
        }
        printf("\n");
    }

}
