//Accept one number and print that number of even number

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    PrintEven
//     Description  :    Accept one number and print that number of even number
//     Input        :    Integer
//     Output       :    Display even number
//     Author       :    Tanisha Pramod Khandre
//     Date         :    21/10/2026
// 
//////////////////////////////////////////////////

void PrintEven(int iNo)
{

    int iCnt = 0;

    if (iNo<=0)
    {   
        return;
    }

    for(iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt*2);                    
    }
}
int main()
{
    int iValue = 0 ;

    printf("Enter number : \n");
    scanf("%d",& iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}