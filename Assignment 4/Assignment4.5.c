#include<stdio.h>
#include<stdlib.h>
void CheckDivisibility(int iValue)
{
    if((iValue % 5) == 0)
    {
        printf("%d is Divisible by 5",iValue);  
    }
    else
    {
        printf("%d is Not Divisible by 5",iValue);   
    }
   
}
int main()
{
    int iValue = 0;

    printf("Enter a  number :");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}