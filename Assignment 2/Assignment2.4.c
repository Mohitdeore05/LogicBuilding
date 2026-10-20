// display first no. in second number of times

// print hello if no. < 10 else demo

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo, int iFrequency)
{
   int i = 0;

   for(i = 1; i <= iFrequency; i++)
   {
        printf("%d\t",iNo);
   }
}

int main()
{
    int iValue = 0, iCount = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    printf("Enter frequency : ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    EXIT_SUCCESS;
}