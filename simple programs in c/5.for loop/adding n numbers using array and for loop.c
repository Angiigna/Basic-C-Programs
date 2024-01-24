#include<stdio.h>
#include<conio.h>
void main()
{
    int i=0,n,sum=0;
    printf("How many numbers do u wish to add:");
    scanf("%d",&n);
    int num[n];
    printf("Enter the numbers to be added:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+=num[i];
    }
    printf("The sum is %d",sum);
    getch();
}
