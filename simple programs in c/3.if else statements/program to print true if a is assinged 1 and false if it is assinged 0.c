#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter value of a");
    scanf("%d",&a);
    if(a==1)
        printf("TRUE");
    else if(a==0)
        printf("FALSE");
    else
        printf("INVALID INPUT");
    getch();
}
