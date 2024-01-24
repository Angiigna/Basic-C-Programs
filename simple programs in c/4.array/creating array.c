#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter elements of array\n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&array[i]);
    }
    printf("\nDisplaying array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }
    getch();
}
