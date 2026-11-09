// fahrenheit to celcius
// i = 10
// o = -12.2222

#include<stdio.h>

double FhToCs(float iNo)
{
    double dRes = 0.0;

    dRes = ((iNo - 32) * (5.0/9.0));

    return dRes;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter fahrenheits :  ");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);

    printf("Value in celcius : %4f",dRet);

    return 0;
}