// check Employee Bonus

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    CalculateBonus
//     Description  :    Check Employee Bonus
//     Input        :    Float
//     Output       :    Display Bonus
//     Author       :    Tanisha Pramod Khandre
//     Date         :    22/10/2026
// 
//////////////////////////////////////////////////

void CalculateBonus(float fSalary , int iYear)
{
    float fBonus = 0.0f ;

    if(fSalary>0.0f && iYear>0){
        if(iYear>10)
        {
            fBonus = (fSalary*0.15f) ;
        }
        else if (iYear>5)
        {
        fBonus = (fSalary*0.10f);
        }
        else
        {
            fBonus = (fSalary*0.05f);
        }
    }
    else
    {
        printf("Invalide input");
    }
     
    printf("Bonus is : %f",fBonus);

}
int main()
{
    float fSalary = 0.0f ;
    int iyear = 0 ;

    printf("Enter Salary and year of service : \n");
    scanf("%f %d",&fSalary , &iyear);

    CalculateBonus(fSalary,iyear);

    return EXIT_SUCCESS;
}