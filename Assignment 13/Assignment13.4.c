// multiplication of digits

#include<stdio.h>

int MultDigits(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    int iMul = 0;

    iMul = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit != 0)
        {
            iMul = iMul * iDigit;
        }
    }
    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("Count is : %d",iRet);
    
    return 0;
}