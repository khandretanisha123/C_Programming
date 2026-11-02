//Accept area in square feet and convert it into square meter
// 1 square feet ==0.0929 square meter

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    squaremeter
//     Description  :    area in square feet and convert it into square meter
//     Input        :    integer 
//     Output       :    return float area
//     Author       :    Tanisha Pramod Khandre
//     Date         :    02/11/2026
// 
/////////////////////////////////////////////////

double SquareMeter(int iNo)
{
    float fArea = 0.0f ;

    fArea = iNo * 0.0929 ;

    return fArea ;

}

int main()
{
    int iValue = 0 ;
    double dRet = 0 ;

    printf("Enter in square feet : \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Value in square meter : %lf",dRet);

    return EXIT_SUCCESS;

}