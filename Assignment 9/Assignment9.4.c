//product of odd 

#include<stdio.h>

int OddNumbers(int iNo)
{
    int iCnt = 0;
    int iRes = 0;
    iCnt = 1;
    iRes = 1;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    while(iCnt <= iNo)
    {
        if((iCnt % 2) != 0)
        {
            iRes = iRes * iCnt;
        }
        iCnt++;
    }
    return iRes;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = OddNumbers(iValue);

    printf("Product of odd numbers is : %d",iRet);

    return 0;
}