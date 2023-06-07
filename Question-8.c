#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,space,k,a,b;
    for(i=4;i>=1;i--)
    {
        for(space=1;space<=4-i;space++)
        {
            printf(" ");
        }
        a = 1;
        for(j=1;j<=i;j++)
        {
            printf("%d",a);
            a=0;
        }
        b=1;
        for(k=2;k<=i;k++)
        {
            if(i>k)
                printf("0");
            else
                printf("%d",b);
        }
        printf("\n");
    }
    getch();
}
