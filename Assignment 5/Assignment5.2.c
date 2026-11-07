#include<stdio.h>
#include<stdlib.h>
void CheckLeapYear(int iYear)
{
    if((iYear % 4 == 0 && iYear % 100 !=0) || (iYear % 400 == 0))
    {
        printf("%d is a Leap Year ",iYear);
    }
    else
    {
        printf("%d is Not Leap Year",iYear);
    }
}
int main()
{
    int iYear = 0;

    printf("Enter year :");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);
    return EXIT_SUCCESS;
}