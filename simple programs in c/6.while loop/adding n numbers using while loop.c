#include<stdio.h>
#include<conio.h>
void main()
{
    int i=0,n,sum=0;
    printf("How many numbers do u wish to add:");
    scanf("%d",&n);
    int num[n];
    printf("Enter the numbers to be added:");
    while(i<n)
    {
       scanf("%d",&num[i]);
       i++;
    }
    i=0;
    while(i<n)
    {
        sum+=num[i];
        i++;
    }
    printf("The sum is %d",sum);
    getch();
}
