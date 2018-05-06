//*****************************************************************************************************
//Filename: Sullivan_Creg_Assignment_3
//Purpose: To Create a program that uses tripleCallByValue and tripleByReference
//Author: Creg C. Sullivan
//Date: February 06, 2011
//******************************************************************************************************

// Headers and other Technical Items
   
#include <iostream>
#include <stdio.h>


using namespace std;

// Function prototype

void pause(void);
void tripleByReference();

//*****************************************************************************
// Triple by value
//*****************************************************************************

int tripleCallByValue (int x)
{
return(x * 3);
}

//*****************************************************************************
//Triple by reference
//*****************************************************************************
void tripleByReference(int *p)
{
*p = *p * 3;
}

//******************************************************************************
//main
//*******************************************************************************

int main(int argc, char* argv[])
{
int count = 1234;

printf("\r\nUsing tripleCallByValue: 3 * %d = %d", count, tripleCallByValue(count));
printf("\r\nUsing tripleByReference: 3 * %d = ", count);
tripleByReference(&count);
printf("%d", count);

pause();
return 0;
}

//**************************************************************************************
//pause
//**************************************************************************************

    void pause(void)
{
     cout << "\n\n";
     system("PAUSE");
     cout << "\n\n";
     return;
}
//******************************************************************************
//end program
//***************************************************************************** 
