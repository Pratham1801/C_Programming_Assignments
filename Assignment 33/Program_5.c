////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplaySchedule
//  Description     :   Used to Display Exam Timing
//  Input           :   Character
//  Output          :   String
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   01/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////



void DisplaySchedule(char chDiv)
{   
    if( chDiv == 'A')
    {
        printf("Your Exam 7 AM");
    }
    else if( chDiv == 'B')
    {
        printf("Your Exam 8:30 AM");
    }
     else if( chDiv == 'C')
    {
        printf("Your Exam 9:20 AM");
    }
     else if( chDiv == 'D')
    {
        printf("Your Exam 10:30 AM");
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
    printf("Enter your Division : \n");
    scanf(" %c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}