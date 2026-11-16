#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMul = 0;
    iMul = 1;
    iCnt = 1;

    while(iCnt <= (iNo / 2))
    {
        if((iNo % iCnt) == 0)
        {
            iMul = iMul * iCnt;
        }
        iCnt++;
    }
    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors is : %d",iRet);

    return 0;
}