// Divisibility by 5 

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    CheckDivisibility
//     Description  :    Divisibility by 5 
//     Input        :    Integer
//     Output       :    Display Divisibility by 5 
//     Author       :    Tanisha Pramod Khandre
//     Date         :    21/10/2026
// 
//////////////////////////////////////////////////

void CheckDivisibility(int iNo)
{
    if(iNo % 5 == 0 )
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
}
int main()
{
    int iValue = 0 ;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}