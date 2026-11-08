// i -   9    o --   nine
// i -  -3    o --   three
// i -  12    o --   invalid


#include<stdio.h>

void Display(int iNo)
{
    if(iNo == 0)
    {
        printf("ZERO");
    }
    else if((iNo == -1) || (iNo == 1))
    {
        printf("ONE");
    }
    else if((iNo == -2) || (iNo == 2))
    {
        printf("TWO");
    }
    else if((iNo == -3) || (iNo == 3))
    {
        printf("THREE");
    }
    else if((iNo == -4) || (iNo == 4))
    {
        printf("FOUR");
    }
    else if((iNo == -5) || (iNo == 5))
    {
        printf("FIVE");
    }
    else if((iNo == -6) || (iNo == 6))
    {
        printf("SIX");
    }
    else if((iNo == -7) || (iNo == 7))
    {
        printf("SEVEN");
    }
    else if((iNo == -8) || (iNo == 8))
    {
        printf("EIGHT");
    }
    else if((iNo == -9) || (iNo == 9))
    {
        printf("NINE");
    }
    else
    {
        printf("Invalid Input");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}