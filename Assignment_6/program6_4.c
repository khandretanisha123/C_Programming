// Check Triangle Validity

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    CheckTriangle
//     Description  :    Check Triangle Validity
//     Input        :    Integer
//     Output       :    Display Validity
//     Author       :    Tanisha Pramod Khandre
//     Date         :    22/10/2026
// 
//////////////////////////////////////////////////

void CheckTriangel(int iSide1 , int iSide2, int iSide3)
{
    if(iSide1>0 && iSide2>0 && iSide3>0)
    {
        if((iSide1+iSide2)>iSide3 && (iSide2+iSide3)>iSide1 && (iSide1+iSide3)>iSide2){
            printf("Valide Triangle");
        }
        else
        {
            printf("Invalide Triangle");
        }
    }
    else
    {
        printf("Invalide Triangele");
    }
}

int main()
{
    int iSide1 = 0 , iSide2 = 0 , iSide3 = 0 ;

    printf("Enter three Sides : \n");
    scanf("%d %d %d", & iSide1 ,& iSide2 , &iSide3);

    CheckTriangel(iSide1 , iSide2 ,iSide3);

    return EXIT_SUCCESS;

}