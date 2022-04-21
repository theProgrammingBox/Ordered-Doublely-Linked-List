#include "Header.h"

/**********************************************************
* ClearList
*----------------------------------------------------------
* This function will clear the list and display all the
* nodes that were removed.
*
* returns nothing
**********************************************************/

void ClearList(Person*& head)	//INPUT	- Head of the list
{
	Person* temp = head;	// CALC		- Tempory pointer to the list

	if (head == NULL)
	{
		cout << "The list has been cleared!\n\n\n";
	}
	else
	{
		cout << "CLEARING LIST:\n";

		while (temp != NULL)
		{
			cout << "Removing " << temp->name << "!\n";
			head = head->next;
			delete temp;
			temp = head;
		}

		head = NULL;
		cout << "\nThe list has been cleared!\n\n\n";
	}
}