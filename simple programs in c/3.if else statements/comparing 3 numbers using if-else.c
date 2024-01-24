#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    a=8;
    b=3;
    c=5;
    if(a>b)
    {
        if(b>c)
        {
            printf("a is the highest value\n");
        }
        else
        {
            if(a>c)
            {
                printf("a is the highest value\n");
            }
            else
                printf("c is the highest value\n");
        }
    }
    else
    {
        if(a>c)
        {
            printf("b is the highest value\n");
        }

        else
        {
          if(b>c)
                printf("b is the highest value\n");
          else
            printf("c is the highest value\n");
        }
    }
    getch();
}
