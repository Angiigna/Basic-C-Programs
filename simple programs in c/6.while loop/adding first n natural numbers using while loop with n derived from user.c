#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,n,sum=0;
    printf("Enter the last natural number to be added :\n");
    scanf("%d",&n);
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    printf("The sum of first %d natural numbers is %d",n,sum);
    getch();
}
