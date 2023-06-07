#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    char a='A';
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf("%c",a++);
        }
        a='A';
        printf("\n");
    }
    getch();
}
