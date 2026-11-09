//product of even 

#include<stdio.h>

int EvenOddDiff(int iNo)
{
    int iCnt = 0;
    int iEvn = 0, iOdd = 0;
    int iRes = 0;
    iCnt = 1;
    iEvn = 1, iOdd = 1;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    while(iCnt <= iNo)
    {
        if((iCnt % 2) == 0)
        {
            iEvn = iEvn * iCnt;
        }
        else
        {
            iOdd = iOdd * iCnt;
        }
        iCnt++;
    }

    iRes = iEvn - iOdd;

    return iRes;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = EvenOddDiff(iValue);

    printf("Difference is : %d",iRet);

    return 0;
}