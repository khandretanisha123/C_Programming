// check number is positive or negative

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    CheckNumber
//     Description  :    check number is positive or negative
//     Input        :    Integer
//     Output       :    Display Positive or negative
//     Author       :    Tanisha Pramod Khandre
//     Date         :    21/10/2026
// 
//////////////////////////////////////////////////

void CheckNumber(int iNo)
{
    if(iNo < 0)
    {
        printf("Number is negative");
    }
    else if(iNo > 0)
    {
        printf("Number is Positive");
    }
    else
    {
        printf("Number is Zero");
    }
}
int main()
{
    int iValue = 0 ;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}