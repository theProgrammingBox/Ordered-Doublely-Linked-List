#include "Header.h"

/**********************************************************
* IsEmpty
*----------------------------------------------------------
* This function will check if the list is empty.
*
* returns nothing
**********************************************************/

void IsEmpty(Person* head)	//INPUT	- Head of the list
{
	if (head == NULL)
	{
		cout << "Yes, the list is empty.\n\n\n";
	}
	else
	{
		cout << "No, the list is NOT empty.\n\n\n";
	}
}