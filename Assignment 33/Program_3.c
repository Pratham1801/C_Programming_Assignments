////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkDigit
//  Description     :   Used to Check whether it is Digit or not
//  Input           :   Integer
//  Output          :   String
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   01/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{   
    if( ch >= '0' && ch <= '9'  )
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

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Digit");
    }
    else
    {
       printf("It is not a Digit"); 
    }

    return 0;
}