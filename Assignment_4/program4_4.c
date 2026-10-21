// check voting eligibility

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    CheckVotingEligibility
//     Description  :    check voting eligibility
//     Input        :    Integer
//     Output       :    Dislay voting eligibility
//     Author       :    Tanisha Pramod Khandre
//     Date         :    21/10/2026
// 
//////////////////////////////////////////////////

void CheckVotingEligibility(int iNo1)
{
    if(iNo1 > 18)
    {
        printf("It is eligibile for voting");
    }
    else if (iNo1 < 18 && iNo1 > 0)
    {
        printf("IT is not eligibile for voting");
    }
    else
    {
        printf("Invalid Age");
    }
}
int main()
{
    int iValue = 0 ;

    printf("Enter Age : \n");
    scanf("%d",&iValue);

    CheckVotingEligibility(iValue);

    return EXIT_SUCCESS;
}