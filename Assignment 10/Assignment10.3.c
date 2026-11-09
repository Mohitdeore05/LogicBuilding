// km to meter
// i = 20
// o = 20000

#include<stdio.h>

int KmToMeter(int iNo)
{
    int iRes = 0;

    iRes = iNo * 1000;

    return iRes;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Kilometers :  ");
    scanf("%d",&iValue);

    iRet = KmToMeter(iValue);

    printf("Value in Meters : %d",iRet);

    return 0;
}