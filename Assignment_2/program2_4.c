//Accept two number from user and display first number in second number of times

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    Display
//     Description  :    display first number in second number of times
//     Input        :    Integer
//     Output       :    Display number
//     Author       :    Tanisha Pramod Khandre
//     Date         :    21/10/2026
// 
//////////////////////////////////////////////////

void Display(int iNo , int Frequency)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= Frequency; iCnt++)
    {
        printf("%d",iNo);
    }
}
int main()
{
    int iValue = 0 ;
    int iCount = 0 ;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    printf("Enter Fequency : \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return EXIT_SUCCESS;
}