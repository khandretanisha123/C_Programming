// print 5 to 1 number

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    Display
//     Description  :    Display 5 to 1 numbers
//     Input        :    No
//     Output       :    print 5 times 
//     Author       :    Tanisha Pramod Khandre
//     Date         :    20/10/2026
// 
//////////////////////////////////////////////////

void Display()
{
    int i  ;

    i = 5;
    while (i >= 1)
    {
        printf("%d\n",i);
        i--;
    }
    
}
int main()
{
    Display();

    return EXIT_SUCCESS;
}