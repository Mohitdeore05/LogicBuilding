// che zero

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    BOOL bRes = FALSE;

    if (iNo == 0)
    {
        return TRUE;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            bRes = TRUE;
        }

        iNo = iNo / 10;
    }
    return bRes;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("Contains zero");
    }
    else if(bRet == FALSE)
    {
        printf("Does not contain zero");
    }

    return 0;
}