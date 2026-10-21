
//accept number from user Factors of number


#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    DisplayFactor
//     Description  :    Accept one number and print its  factors
//     Input        :    Integer
//     Output       :    Display  Factors number
//     Author       :    Tanisha Pramod Khandre
//     Date         :    21/10/2026
// 
//////////////////////////////////////////////////

void DispalyFactor(int iNo)
{
    int iCnt = 0 ;
    if(iNo <= 0 )
    {
        iNo = -iNo ;
    }

    for(iCnt = 1 ; iCnt<=iNo/2 ; iCnt++)
    {
        if(iNo % iCnt==0  )
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

    DispalyFactor(iValue);

    return EXIT_SUCCESS;
}