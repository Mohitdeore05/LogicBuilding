#include<stdio.h>
#include<stdlib.h>
void CheckMultipleDivisibility(int iValue)
{
    if((iValue % 3) == 0 && (iValue % 5) == 0)
    {
        printf("%d is divisible by both 3 and 5",iValue);
    }
    else if((iValue % 3) == 0)
    {
        printf("%d is divisible by 3 ",iValue);
    }
     else if((iValue % 5) == 0)
    {
        printf("%d is divisible by 5 ",iValue);
    }
    else
    {
        printf("Not Divisible by either !");
    }
   
}
int main()
{
    int  iValue = 0;

    printf("Enter Marks :");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}