// sq feet to sq meter
// i = 5
// o = 0.464515

#include<stdio.h>

double SqMeter(int iNo)
{
    double dRes = 0.0;

    dRes = iNo * 0.0929;

    return dRes;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in sq feet :  ");
    scanf("%d",&iValue);

    dRet = SqMeter(iValue);

    printf("Value in celcius : %lf",dRet);

    return 0;
}