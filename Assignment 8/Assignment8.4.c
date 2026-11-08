// FACTORIAL

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iRes;
    iCnt = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iCnt <= 10)
    {
        iRes = iNo * iCnt;
        printf("%d\t",iRes);
        iCnt++;
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}