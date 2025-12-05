////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkCapital
//  Description     :   Used to Check whether the character is Capital or not
//  Input           :   Character
//  Output          :   String
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   01/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{   
    if( ch >= 'A' && ch <= 'Z' )
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Character");
    }
    else
    {
       printf("It is not Capital Character"); 
    }

    return 0;
}