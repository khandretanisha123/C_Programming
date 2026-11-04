// Accept number and retrun multipication of all 

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    CountEven
//     Description  :    Accept number and return multipication of all
//     Input        :    Integer
//     Output       :    retrun multipication 
//     Author       :    Tanisha Pramod Khandre
//     Date         :    04/11/2026
// 
////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iDigit = 0 ;
    int iMult = 1 ;

    if(iNo < 0)
    {
        iNo = - iNo ;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10 ;

        if(iDigit !=0)
        {
            iMult = iMult * iDigit ;
        }
        iNo = iNo / 10 ;

    }
    return iMult  ; 
}
int main()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS ;
}