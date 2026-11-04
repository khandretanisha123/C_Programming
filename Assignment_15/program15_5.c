//Accept total marks and total obtain marks and calculate percentage

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    Percentage
//     Description  :    Accept total marks and total obtain marks and calculate percentage
//     Input        :    Integer
//     Output       :    retrun float percentage
//     Author       :    Tanisha Pramod Khandre
//     Date         :    04/11/2026
// 
////////////////////////////////////////

float Percentage (int iNo1 , int iNo2)
{
    float  iAns = 0.0f ;

    iAns = ((float)iNo2 / (float)iNo1) * 100.0f ;

    return iAns ;
}

int main()
{
    int iValue1 = 0 ; 
    int ivalu2 = 0 ;
    float fRet = 0.0f ;

    printf("please Enter total marks: ");
    scanf("%d", & iValue1);

    printf("please enter obtain marks :");
    scanf("%d",&ivalu2);

    fRet = Percentage(iValue1 , ivalu2);

    printf("%f",fRet);

    return EXIT_SUCCESS;

}