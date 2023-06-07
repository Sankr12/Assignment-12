//Write a program to calculate HCF of two numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int c,n=2,a,b,HCF=1,l,m;
    printf("Enter First number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    l=a;
    m=b;
    while(n<=a || n<=b)
    {
        if(a%n==0 && b%n==0)
        {
            HCF = HCF*n;
            a=a/n;
            b=b/n;
        }
        else
            n++;
    }
    printf("HCF of %d and %d = %d",l,m,HCF);
    getch();
}
