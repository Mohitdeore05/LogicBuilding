// accept range and display all numbers between them


#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iRes = 0;

    if((iStart < 0) || (iEnd < 0))
    {
        printf("Invalid range.");
    }
    else
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            iRes = iRes + iCnt;
        }
    }
    return iRes;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("\nAddition is : %d",iRet);

    return 0;
}