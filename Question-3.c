#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,space;
    for(a=1;a<=4;a++)
        {
            for(space=1;space<=4-a;space++)
            {
                printf(" ");
            }
            for(b=1;b<=a;b++)
             {
                 printf("*");
            }
            printf("\n");
        }
    getch();
}

