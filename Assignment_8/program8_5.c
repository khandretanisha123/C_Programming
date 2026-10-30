//Accept number and print its table in reverse

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    RevTable
//     Description  :    print table 
//     Input        :    Integer
//     Output       :    print
//     Author       :    Tanisha Pramod Khandre
//     Date         :    30/10/2026
// 
//////////////////////////////////////////////////

void RevTable (int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0 ;
    for(iCnt = 10 ; iCnt >= 1 ; iCnt-- )
    {
        printf("%d\t",iNo * iCnt);
    }

}
int main ()
{
    int iValue = 0 ;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    RevTable(iValue);

    return EXIT_SUCCESS ;
}
