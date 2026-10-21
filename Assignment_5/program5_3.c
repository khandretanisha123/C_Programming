// student grade

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    DisplayGrade
//     Description  :    Display student grade
//     Input        :    Integer
//     Output       :    Display Grade
//     Author       :    Tanisha Pramod Khandre
//     Date         :    21/10/2026
// 
//////////////////////////////////////////////////

void DisplayGrade(float fMarks)
{   
    if(fMarks>100 || fMarks<0)
    {
        printf("Invalid Marks");
    }
    if (fMarks <= 100 && fMarks >= 90)
    {
    printf("Grade A");
    }
    else if(fMarks >= 75 && fMarks <=89)
    {
        printf("Grade B");
    }
    else if(fMarks >= 60 && fMarks <= 74)
    {
        printf("Grade C");
    }
    else if (fMarks >= 40 && fMarks<=59 )
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }
}
int main()
{
    float fMarks = 0.0f ;

    printf("Enter Marks : ");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}