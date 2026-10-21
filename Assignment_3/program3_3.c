//accept number and its even factors of that number

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    DisplayEvenFactor
//     Description  :    Accept one number and print its even factors
//     Input        :    Integer
//     Output       :    Display even Factors number
//     Author       :    Tanisha Pramod Khandre
//     Date         :    21/10/2026
// 
//////////////////////////////////////////////////

void DispalyEvenFactor(int iNo)
{
    int iCnt = 0 ;
    if(iNo <= 0 )
    {
        iNo = -iNo ;
    }

    for(iCnt = 1 ; iCnt<=iNo/2 ; iCnt++)
    {
        if((iNo % iCnt==0 )&& (iCnt % 2 == 0) )
        {
            printf("%d\t",iCnt);
        }
    }

}
int main()
{
    int iValue = 0 ;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DispalyEvenFactor(iValue);

    return EXIT_SUCCESS;
}