// Greater of three number 

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    findGreatest
//     Description  :    Greater of three number 
//     Input        :    Integer
//     Output       :    Display gratest number
//     Author       :    Tanisha Pramod Khandre
//     Date         :    21/10/2026
// 
//////////////////////////////////////////////////

void FindGreatest( int iNo1 , int iNo2 , int iNo3)
{
    if( iNo1 > iNo2 && iNo1 > iNo3)
    {
        printf("%d is greatest",iNo1);
    }
    else if ( iNo2 > iNo1 && iNo2 > iNo3)
    {
        printf("%d is greatest ", iNo2);
    }
    else
    {
        printf("%d is greatest ", iNo3);
    }
}
int main()
{
    int iValue1 = 0 ;
    int iValue2 = 0 ;
    int iValue3 = 0 ;

    printf("Enter number : \n");
    scanf("%d",&iValue1);

    printf("Enter number : \n");
    scanf("%d",&iValue2);

    printf("Enter number : \n");
    scanf("%d",&iValue3);

    FindGreatest(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;
}
