// reverse table

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int iRes = 0;
    iCnt = 10;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iCnt >= 1)
    {
        iRes = iNo * iCnt;
        printf("%d\t",iRes);
        iCnt--;
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}