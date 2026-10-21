//Accept one number and check it is Divisible by 5 or not 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    Check
//     Description  :    Number is divisible by 5 or not 
//     Input        :    integer
//     Output       :    boolean
//     Author       :    Tanisha Pramod Khandre
//     Date         :    20/10/2026
// 
//////////////////////////////////////////////////

bool check(int iNo)
{
    if(( iNo % 5) == 0)
    {
        return true ;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0 ;
    bool bRet = false ;

    printf("Enter one number: \n");
    scanf("%d",&iValue);

    bRet = check(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
    }
}