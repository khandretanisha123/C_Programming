// Calculate discount

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    CalculateDiscount
//     Description  :    calculate Discount
//     Input        :    Float
//     Output       :    Totalamount
//     Author       :    Tanisha Pramod Khandre
//     Date         :    22/10/2026
// 
//////////////////////////////////////////////////

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f ;
    float fFinalAmount = 0.0f;

    if(fAmount <= 1000)
    {
        fDiscount = 0;
    }
    else if (fAmount <=5000)
    {
        fDiscount = (fAmount*0.10f);
    }
    else if(fAmount > 5000)
    {
        fDiscount = (fAmount*0.20f);
    }

    fFinalAmount = fAmount - fDiscount;

    printf("Final Amount is %f ",fFinalAmount);
}

int main()
{
    float fAmount = 0.0f ;

    printf("Enter Amount : \n");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}