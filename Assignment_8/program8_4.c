// Accept number and print its table 

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    Table
//     Description  :    print table 
//     Input        :    Integer
//     Output       :    print
//     Author       :    Tanisha Pramod Khandre
//     Date         :    30/10/2026
// 
//////////////////////////////////////////////////

void Table (int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0 ;
    for(iCnt = 1 ; iCnt <= 10 ; iCnt++ )
    {
        printf("%d\t",iNo * iCnt);
    }

}
int main ()
{
    int iValue = 0 ;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Table(iValue);

    return EXIT_SUCCESS ;
}
