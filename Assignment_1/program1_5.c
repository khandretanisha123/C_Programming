// Accept number from user print that number of * on screen

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    Accept
//     Description  :    print * 
//     Input        :    integer
//     Output       :    No
//     Author       :    Tanisha Pramod Khandre
//     Date         :    20/10/2026
// 
//////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0 ;

    for(iCnt = 1 ; iCnt<=iNo; iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue = 0 ;
    
    printf("Enter one number : \n");
    scanf("%d",&iValue);

    Accept(iValue);

    return EXIT_SUCCESS;
}