/*
    Accept division of student and print its Exam timing

    A = your exam at 7AM
    B = Your exam at 8.30 AM
    C = Your exam at 9.20 AM
    D = Your exam at 10.30 AM
    
    Application should be case  insensitive

*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    ChkSmall(Check Digit)
//     Description  :    check character it in upercase or not
//     Input        :    Character
//     Output       :    Boolean
//     Author       :    Tanisha Pramod Khandre
//     Date         :    12/11/2026
// 
//////////////////////////////////////////////////
void DisplaySChedule(char chDiv)
{
    if(chDiv == 65 || chDiv == 97)
    {
        printf("Your exam at 7 AM");
    }
    else if (chDiv == 66 || chDiv == 98)
    {
        printf("Your exam at 8.30");
    }
    else if ( chDiv == 67 || chDiv == 99)
    {
        printf("Your exam at 9.20");
    }
    else if ( chDiv == 68 || chDiv == 100)
    {
        printf("Your exam at 10.30");
    }
    else
    {
        printf("Division not excess");
    }
}
int main()
{
    char cValue = '\0';


    printf("Enter Division :");
    scanf("%c",&cValue);

    DisplaySChedule(cValue);

    return EXIT_SUCCESS;

}