#include<stdio.h>
#include<stdlib.h>
void CheckVotingEligibility(int iAge)
{
    if(iAge >= 21)
    {
        printf("Eligible for Voting ! ");
    }
    else if (iAge < 21 && iAge > 0)
    {
        printf("Not Eligible for Voting Sorry ! ");
    }
    else
    {
        printf("invalid Age ");
    }
}
int main()
{
    int iAge = 0;

    printf("Enter Your Age :");
    scanf("%d",&iAge);


    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}