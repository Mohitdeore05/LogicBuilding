#include<stdio.h>
#include<stdlib.h>
void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond) 
    {
        printf("%d is Greater Number",iFirst);  
    }
    else if(iSecond > iFirst) 
    {
        printf("%d is Greater Number",iSecond);   
    }
    else{
        printf("Both Numbers are equal !");
    }
   
}
int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter Numbers :");
    scanf("%d %d",&iValue1,&iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}