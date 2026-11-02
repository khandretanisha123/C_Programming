// Accept temperatur in fahrenheit and convert it into celsius

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    FhToCs
//     Description  :    print temperatur in fahrenheit and convert it into celsius
//     Input        :    float  
//     Output       :    return float celsius
//     Author       :    Tanisha Pramod Khandre
//     Date         :    02/11/2026
// 
/////////////////////////////////////////////////

double FhToCs(float fTemp)
{
    float fAns = 0.0f ;

    fAns = (fTemp-32)*(5.0/9.0);

    return fAns ;
}
int main()
{
    float fValue = 0 ;
    double dRet = 0.0 ;

    printf("Enter temperatur in fahrenheit : \n");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);

    printf("temperatur in celsius : %lf",dRet);

    return EXIT_SUCCESS;

}