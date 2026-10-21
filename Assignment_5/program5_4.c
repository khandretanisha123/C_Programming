// divisibily by 3 and 5 or both 

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    CheckMultipleDivisibility
//     Description  :    Check divisibily by 3 and 5 or both 
//     Input        :    Integer
//     Output       :    Display divisibily by 3 and 5 or both 
//     Author       :    Tanisha Pramod Khandre
//     Date         :    21/10/2026
// 
//////////////////////////////////////////////////

void CheckMultipleDivisibility(int iNo)
{
    if((iNo % 5 == 0) && (iNo % 3 == 0))
    {
        printf("Divisible by Both");
    }
    else if(iNo % 5 == 0)
    {
        printf("Divisible by 5 Only");
    }
    else if (iNo % 3 == 0)
    {
        printf("Divisible by 3 Only");
    }
    else
    {
        printf("Not Divisible by 3 and 5");
    }
}
int main()
{
    int iValue = 0 ;

    printf("Enter Value : ");
    scanf("%d",& iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}