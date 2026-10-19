// CHECK DIVISIBILITY BY 5

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE (1)
#define FALSE (0)

int Check(int iNo)
{
    if((iNo % 5) == 0)
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

    printf("Enter the number : ");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("DIVISIBLE BY 5");
    }
    else
    {
        printf("NOT DIVISIBLE BY 5");
    }

    EXIT_SUCCESS;
}