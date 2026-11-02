// convert km to meter 

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    KmtoMeter
//     Description  :    print Meter value 
//     Input        :    Intrger
//     Output       :    return Intrger Meter
//     Author       :    Tanisha Pramod Khandre
//     Date         :    02/11/2026
// 
/////////////////////////////////////////////////

int KmToMeter(int iNo)
{
    int iAns = 0;

    iAns = iNo *1000 ;

    return iAns ;
}

int main()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter kilometer : \n");
    scanf("%d",&iValue);

    iRet = KmToMeter(iValue);

    printf("Value in Meter : %d",iRet);

    return EXIT_SUCCESS;

}