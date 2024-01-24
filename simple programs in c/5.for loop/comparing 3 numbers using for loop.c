#include<stdio.h>
#include<conio.h>
void main()
{
    int numbers[]={5,9,3},i,max;
    max=numbers[0];
    for(i=0;i<3;i++)
    {
        if(numbers[i]>max)
        {
            max=numbers[i];
        }
    }
    printf("%d",max);
    getch();
}
