#include<stdio.h>
#include<stdlib.h>
void CheckNumber(int iNo)
{
    if(iNo>0)
    {
        printf("%d is Positive Number",iNo);  
    }
    else if(iNo<0)
    {
        printf("%d is Negative Number",iNo);   
    }
    else
    {
        printf("%d is Number zero",iNo);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a  number :");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}