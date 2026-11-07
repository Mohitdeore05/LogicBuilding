#include<stdio.h>
#include<stdlib.h>
void CheckCharacterType(char cValue)
{
    if(cValue >=65 && cValue <=90 )
    {
        printf("Upper Alphabate ");
    }
    else if(cValue >=97 && cValue <=122 )
    {
        printf("Lower Alphabate ");
    }
    else if(cValue >=48 && cValue <=57 )
    {
        printf("Digits ");
    }
    else if(cValue >=32 && cValue <=127 )
    {
        printf("Special Character ");
    }
    

}
int main()
{
    char  cValue = '\0';

    printf("Enter a Character :");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}