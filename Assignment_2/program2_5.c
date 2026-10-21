//Accept number and check number is even or odd

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1 
#define FALSE 0

 typedef int BOOL ;

///////////////////////////////////////////////////
//      
//     Funtion name :    ChkEven
//     Description  :    check number is even or odd
//     Input        :    Integer
//     Output       :    Boolean
//     Author       :    Tanisha Pramod Khandre
//     Date         :    21/10/2026
// 
//////////////////////////////////////////////////

BOOL ChkEven(int iNo)
{
    if((iNo % 2 )== 0)
    {
        return true ;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0 ;
    BOOL bRet = false ;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == true)
    {
        printf("Number is even ");
    }
    else
    {
        printf("Number is odd");
    }
}