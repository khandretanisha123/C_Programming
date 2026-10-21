
// Divide two number

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    Display
//     Description  :    Display 5 times
//     Input        :    No
//     Output       :    print 5 times 
//     Author       :    Tanisha Pramod Khandre
//     Date         :    20/10/2026
// 
//////////////////////////////////////////////////

int Divide(int iNo1 , int iNo2)
{
    int iAns = 0 ;

    if(iNo2 == 0 )
    {
        return EXIT_FAILURE ;
    }

    iAns = iNo1 /iNo2 ;

    return iAns;
}

int main()
{
    int iValue1 = 15 ; int iValue2 = 5;

    int iRet = 0;

    iRet = Divide(iValue1,iValue2);

    printf("Division is %d\n",iRet);

    return EXIT_SUCCESS;

}