#include<stdio.h>
#include<stdlib.h>
void CheckAddmission(float fMarks ,int iAge)
{
    if(fMarks < 0 || fMarks > 100 || iAge < 0)
    {
        printf("invalid  Input ");
    }


  /*  else if((fMarks >= 60 && fMarks <= 100) && (iAge >= 17 && iAge <= 100))
    {
        printf("Eligible for Admission ");
    }    */
    else if(fMarks >=60 && iAge >= 17)
    {
        printf("Eligible for Admission ");
    }

    else 
    {
        printf("Not Eligible !");
    }
}
int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter Marks and Age :");
    scanf("%f %d",&fMarks, &iAge);

    CheckAddmission(fMarks , iAge);
    return EXIT_SUCCESS; 
}