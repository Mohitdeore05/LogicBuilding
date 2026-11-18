#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    float iPer = 0.0f;

    iPer = ((float)iNo1 / iNo2) * 100;

    return iPer;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter obtained marks : \n");
    scanf("%d",&iValue1);

    printf("Enter total marks: \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentage : %f",fRet);
    
    return 0;
}