#include<stdio.h>

int CountDiff(int iNo)
{
    int iEvnSum = 0;
    int iOddSum = 0;
    int iDigit = 0;

    int iDifference = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if((iDigit % 2) == 0)
        {
            iEvnSum = iEvnSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }
    }

    iDifference = iEvnSum - iOddSum;

    return iDifference;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Count is : %d",iRet);
    
    return 0;
}