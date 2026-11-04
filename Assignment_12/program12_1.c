//Accept number from user and display its digits in reverse

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    DisplayDigit
//     Description  :    Accept number from user and display its digits in reverse
//     Input        :    Integer
//     Output       :    Display
//     Author       :    Tanisha Pramod Khandre
//     Date         :    04/11/2026
// 
////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0 ;

    if(iNo < 0)
    {
        iNo = - iNo ;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10 ;
        printf("%d\n",iDigit);
        iNo = iNo / 10 ;
    }
    
}
int main()
{
    int iValue = 0 ;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS ;
}