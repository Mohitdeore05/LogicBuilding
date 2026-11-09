// Area of rectangle

#include<stdio.h>

double RectangleArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0;
    double dRet = 0.0;

    printf("Enter the width : ");
    scanf("%f",&fValue1);

    printf("Enter the height : ");
    scanf("%f",&fValue2);

    dRet = RectangleArea(fValue1,fValue2);

    printf("Area of rectangle is : %lf",dRet);

    return 0;
}