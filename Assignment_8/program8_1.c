//number <50 = print Small
// 50<number<100 = print medium
// 100 <number = print large

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    Number
//     Description  :    Print Small / Medium / Large
//     Input        :    Integer
//     Output       :    print
//     Author       :    Tanisha Pramod Khandre
//     Date         :    30/10/2026
// 
//////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if( iNo > 50 && iNo < 100)
    {
        printf("Medium");
    }
    else if (iNo > 100)
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0 ;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}