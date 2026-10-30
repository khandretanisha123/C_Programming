// Accept number and print it into words

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    Display
//     Description  :    Print into word
//     Input        :    Integer
//     Output       :    print
//     Author       :    Tanisha Pramod Khandre
//     Date         :    30/10/2026
// 
//////////////////////////////////////////////////

void Display(int iNo )
{
    if(iNo < 0)
    {
        iNo = - iNo;
    }

    if(iNo == 1)
    {
        printf("One");
    }
    else if(iNo == 2)
    {
        printf("Two");
    }
    else if(iNo == 3)
    {
        printf("Three");
    }
    else if(iNo == 4)
    {
        printf("Four");
    }
    else if(iNo == 5)
    {
        printf("Five");
    }
    else if(iNo == 6)
    {
        printf("Six");
    }
    else if(iNo == 7)
    {
        printf("Seven");
    }
    else if(iNo == 8)
    {
        printf("Eight");
    }
    else if (iNo == 9)
    {
        printf("Nine");
    }
    else
    {
        printf("Invalid Number");
    }
}

int main ()
{
    int iValue = 0 ;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS ;
}
