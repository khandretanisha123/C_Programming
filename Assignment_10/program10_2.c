//Accept width and height of rectangle and print Area

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    RectArea
//     Description  :    print Area
//     Input        :    Float
//     Output       :    return double Area  
//     Author       :    Tanisha Pramod Khandre
//     Date         :    02/11/2026
// 
/////////////////////////////////////////////////

double RectArea(float fWidth , float fHeight )
{
    float fArea = 0.0f ;

    fArea = fWidth * fHeight ;

    return fArea ;
}

int main()
{
    float fValue1 , fVaue2 = 0.0f ;
    float dRet = 0.0f ;

    printf("Eneter width : \n");
    scanf("%f",& fValue1);

    printf("Enter height : \n");
    scanf("%f",& fVaue2);

    dRet = RectArea(fValue1,fVaue2);

    printf("Area of rectangle is : %lf ", dRet);

    return EXIT_SUCCESS;
}