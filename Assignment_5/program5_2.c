//Check Leap Year

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    CheckLeapYear
//     Description  :    Check Leap Year
//     Input        :    Integer
//     Output       :    Display Leap Year or Not
//     Author       :    Tanisha Pramod Khandre
//     Date         :    21/10/2026
// 
//////////////////////////////////////////////////

void CheckLeapYear(int iYear)
{   
    if(iYear<=0)
    {
        printf("Invalid");
    }

    if(iYear % 400 == 0 || ((iYear % 4 == 0) && (iYear % 100 !=0)) )
    {
        printf("Leap year");
    }
    else
    {
        printf("Not leap year");
    }
}
int main()
{
    int iYear = 0 ;

    printf("Enter year : ");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}