//  calculate electric Bill

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    CalculateElectricBill
//     Description  :    calculate electric Bill
//     Input        :    Integer
//     Output       :    Integer
//     Author       :    Tanisha Pramod Khandre
//     Date         :    22/10/2026
// 
//////////////////////////////////////////////////

void CalculateElectricBill(int iUnit)
{
    float fbill = 0.0f ;

    if(iUnit <= 0)
    {
        printf("Invalid Input");
    }

    if(iUnit <= 100)
    {
        fbill = iUnit*5 ;
    }
    else if (iUnit > 100 && iUnit<=200)
    {
        fbill = ((iUnit-100)*7) + (100*5);
    }
    else if(iUnit>200)
    {
        fbill = ((iUnit-200)*10) + (100*5) + (100*7);
    }
    printf("Amount : %f",fbill);
}
int main()
{
    int iUnit = 0 ;

    printf("Enter consumed Unit : ");
    scanf("%d",& iUnit);

    CalculateElectricBill(iUnit);

    return EXIT_SUCCESS;
}