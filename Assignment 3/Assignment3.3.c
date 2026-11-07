// even factors

#include<stdio.h>

int EvenFactor(int iNo)
{
    if(iNo <= 0)
    {
        iNo = - iNo;
    }

    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(((iCnt % 2) == 0) && ((iNo % iCnt) == 0))
        {
            printf("%d\n",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    EvenFactor(iValue);

    return 0;
}