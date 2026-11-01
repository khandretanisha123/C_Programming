// Accept number as dollar and return is in rupees 
//   1 dollar = 70 rupees

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    DollarToInt
//     Description  :    Print rupees
//     Input        :    Integer
//     Output       :    print
//     Author       :    Tanisha Pramod Khandre
//     Date         :    01/11/2026
// 
//////////////////////////////////////////////////

int DollarToInt(int iNo)
{
    int iRepees = 0 ;
    
    if(iNo > 0)
    {
       iRepees = iNo * 70 ; 
    }

    return iRepees;
}

int main()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter number in USB:\n");
    scanf("%d",&iValue);

    iRet = DollarToInt(iValue);
    printf("value is INR is %d ",iRet);

    return EXIT_SUCCESS;
}