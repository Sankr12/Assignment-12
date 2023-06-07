#include<stdio.h>
int main()
{
    int a,b,d;
    for(a=5;a>=1;a--)
    {
        d=a;
        for(b=1;b<=a;b++)
        {
            printf("%d",d--);
        }
        printf("\n");
    }
}
