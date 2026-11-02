// Accept radius of circle and print Area

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    CircleArea
//     Description  :    print Area
//     Input        :    Float
//     Output       :    return double Area  
//     Author       :    Tanisha Pramod Khandre
//     Date         :    02/11/2026
// 
/////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    float fArea = 0.0 ;
    float pi = 3.14 ;

    fArea = pi * fRadius * fRadius ;

    return fArea ;
}

int main()
{
    float fValue = 0.0 ;
    double dRet = 0.0 ;

    printf("Enter radius : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area  of circle is : %lf",dRet);

    return EXIT_SUCCESS ;
}