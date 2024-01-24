#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,sum=0;
    while(i<=10)
    {
        sum+=i;
        i++;
    }
    printf("The sum of first 10 natural numbers is %d ",sum);
    getch()
}
