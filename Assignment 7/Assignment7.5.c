//  i/p - 4
//  o/p -   4   8   12   16   20


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    while(iCnt != 5)
    {
        iSum = iSum + iNo;
        printf("%d\t",iSum);
        iCnt++;
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}