#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int FactSum = 0, NonSum = 0;
    int iSum = 0;
    iCnt = 1;

    while(iCnt < iNo)
    {
        if((iNo % iCnt) == 0)
        {
            FactSum = FactSum + iCnt;
        }
        else
        {
            NonSum = NonSum + iCnt;
        }
        iCnt++;
    }

    iSum = FactSum - NonSum;

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference is : %d",iRet);

    return 0;
}