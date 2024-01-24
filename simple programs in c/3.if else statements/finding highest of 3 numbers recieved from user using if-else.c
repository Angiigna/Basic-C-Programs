#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter 3 integers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(b>c)
        {
            printf("%d is the highest value\n",a);
        }
        else
        {
            if(a>c)
            {
                printf("%d is the highest value\n",a);
            }
            else
                printf("%d is the highest value\n",c);
        }
    }
    else
    {
        if(a>c)
        {
            printf("%d is the highest value\n",b);
        }

        else
        {
          if(b>c)
                printf("%d is the highest value\n",b);
          else
            printf("%d is the highest value\n",c);
        }
    }
    getch();
}
