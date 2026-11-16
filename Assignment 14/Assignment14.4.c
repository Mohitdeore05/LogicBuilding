#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    iCnt = 1;

    while(iCnt <= iNo)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("Summation of all non-factors is : %d",iRet);

    return 0;
}