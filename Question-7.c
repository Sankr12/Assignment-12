#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,space,k;
    char a = 'A' , b;
    for(i=4;i>=1;i--)
    {
        for(space=1;space<=4-i;space++)
        {
            printf(" ");
        }
        a = 'A';
        for(j=1;j<=i;j++)
        {
            printf("%c",a++);
        }
        b=i+63;
        for(k=2;k<=i;k++)
        {
            printf("%c",b--);
        }
        printf("\n");
    }
    getch();
}
