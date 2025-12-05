////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkSmall
//  Description     :   Used to Check whether Character is small case or not
//  Input           :   Integer
//  Output          :   String
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   01/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{   
    if( ch >= 'a' && ch <= 'z'  )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function : Main
//
////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small case Character");
    }
    else
    {
       printf("It is not a Small case Character"); 
    }

    return 0;
}