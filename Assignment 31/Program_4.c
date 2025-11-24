#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern
//  Description     :   Used to perform Division of two number
//  Input           :   Integer, Integer
//  Output          :   Pattern
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   7/11/2025
//
////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow; i++)
    {
       for(i = 1; i <= iRow; i++)
        {   
           for(j = 1; j <= iCol; j++)
            {
                if(i==1 || i == iRow || j == 1 || j == iCol || i == j)
                {
                    printf("*\t");
                }
                
                else{
                    printf(" \t");
                }
            }
            printf("\n");    
        }
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows and columns :");
    scanf("%d %d", &iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}