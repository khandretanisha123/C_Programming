//Accept number and print number line

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    Dispaly 
//     Description  :    Print number line
//     Input        :    Integer
//     Output       :    Display
//     Author       :    Tanisha Pramod Khandre
//     Date         :    30/10/2026
// 
//////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo > 0)
    {
        iNo = -iNo ;
    }

    int iCnt  = 0 ;

    for(iCnt = iNo ; iCnt <= (-iNo) ; iCnt ++)
    {
        printf("%d\t",iCnt);
    }


}

int main()
{
    int iValue = 0 ;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}