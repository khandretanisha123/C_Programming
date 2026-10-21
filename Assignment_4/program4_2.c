// check number is even or odd

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    CheckEvenOdd
//     Description  :    check number is even or odd 
//     Input        :    Integer
//     Output       :    Display even or odd
//     Author       :    Tanisha Pramod Khandre
//     Date         :    21/10/2026
// 
//////////////////////////////////////////////////

void CheckEvenOdd(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo ;
    }
    if(iNo % 2 == 0)
    {
        printf("Number is Even ");
    }
    else
    {
        printf("Number is Odd");
    }
}
int main()
{
    int iValue = 0 ;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}
