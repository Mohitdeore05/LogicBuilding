#include<stdio.h>
#include<stdlib.h>
void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount  = 0.0f;

    if(fAmount < 1000)
    {
        fFinalAmount = fAmount  - (fAmount * 0.0 );
        printf("%.2f Payable Amount :",fFinalAmount);
    }
    else if (fAmount > 1000 && fAmount < 5000)
    {
        fFinalAmount = fAmount  - (fAmount * 0.10 );
        printf("%.2f Payable Amount :",fFinalAmount);
    }
    else if (fAmount > 5000)
    {
        fFinalAmount = fAmount  - (fAmount * 0.20 );
        printf("%.2f Payable Amount :",fFinalAmount);
    }
}
int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount : ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}