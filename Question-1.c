//Write a program to print first N terms of a Fibonacci series.
#include<stdio.h>
#include<conio.h>
int main()
{
    int c,n,a=0,x=0,y,z=1;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    while(c<n)
    {
        printf("%d ",a);
        y=a+z;
        a=z;
        z=y;
        c++;
    }
    getch();
}
