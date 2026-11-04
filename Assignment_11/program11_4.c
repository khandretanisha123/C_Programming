//Accept range from user and retrun addition of even number

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//      
//     Funtion name :    RangeSumEven
//     Description  :    Accept range from user and retrun addition of even number
//     Input        :    Integer
//     Output       :    return Sum 
//     Author       :    Tanisha Pramod Khandre
//     Date         :    04/11/2026
// 
//////////////////////////////////////////////////

int RangeSumEven(int istart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(istart <0 || iEnd <0 || istart >iEnd)
    {
        return -1 ;
    }
    else
    {
       for(iCnt = istart; iCnt <= iEnd; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
        }
    }

    return iSum;
}
int main()
{
    int iValue1 , iValue2 = 0 ;
    int iRet = 0;

    printf("Enter Starting point :");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);
    
    if(iRet == -1)
    {
        printf("Invalid Input \n");
    }
    else
    {
        printf("Addition is : %d ",iRet);
    }

    return EXIT_SUCCESS;

}