// even odd

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
   if((iNo %2) == 0)
   {
        return TRUE;
   }
   else
   {
        return FALSE;
   }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number :");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("Entered number is EVEN.");
    }
    else
    {
        printf("Entered number is ODD.");
    }
    EXIT_SUCCESS;
}