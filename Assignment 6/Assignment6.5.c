#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary,int iYears)
{
    float fBonus = 0.0f;
    if(iYears > 10)
    {
        fBonus = (fSalary * 15)/100;
        printf("the Bonus is %f:",fBonus);
    }
    else if(iYears > 5 && iYears < 10)
    {
        fBonus = (fSalary * 10)/100;
        printf("the Bonus is %f:",fBonus);
    }
    else   
    {
        fBonus = (fSalary * 5)/100;
        printf("the Bonus is %f:",fBonus);
    }
}
int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter Salary and Years of Service :");
    scanf("%f %d", &fSalary,&iYears);

    CalculateBonus(fSalary,iYears);
    return EXIT_SUCCESS;
}