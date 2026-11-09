// dollar to rupee
// i = 1
// o = 70

#include<stdio.h>

int DollarToRupee(int iNo)
{
    int iRes = 0;

    iRes = iNo * 70;

    return iRes;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :  ");
    scanf("%d",&iValue);

    iRet = DollarToRupee(iValue);

    printf("Value in INR : %d",iRet);

    return 0;
}