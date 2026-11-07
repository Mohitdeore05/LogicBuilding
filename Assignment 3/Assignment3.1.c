#include<stdio.h>

int PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return -1;
    }

    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\n",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}