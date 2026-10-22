//Student Admission atleast marks>=60 and age >=17 

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    CheckAdmission
//     Description  :    calculate electric Bill
//     Input        :    Float,Int
//     Output       :    print Eligibility
//     Author       :    Tanisha Pramod Khandre
//     Date         :    22/10/2026
// 
//////////////////////////////////////////////////


void CheckAdmission(float fMarks , int Age )
{
    if(fMarks>100  || Age>100 || fMarks<0 || Age<0)
    {
        printf("Invalide input");
    }
    if(fMarks >= 60 && Age >= 17 )
    {
        printf("Eligible for Admission");
    }
    else
    {
        printf("Not Eligible");
    }
}
int main()
{
    float fMarks = 0.0f;
    int iAge = 0 ;

    printf("Enter Marks : \n");
    scanf("%f",&fMarks);

    printf("Enter age : \n");
    scanf("%d",& iAge);

    CheckAdmission(fMarks,iAge);

    return EXIT_SUCCESS;
}