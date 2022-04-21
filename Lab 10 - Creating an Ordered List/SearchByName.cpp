#include "Header.h"

/**********************************************************
* SearchByName
*----------------------------------------------------------
* This function will search for a person by name and
* display their information.
*
* returns nothing
**********************************************************/

void SearchByName(Person* head)	//INPUT	- Head of the list
{
	bool found;		//CALC - Boolean to check if the name is found
	string name;	//CLAC - Name to search for

	found = false;

	if (head == NULL)
	{
		cout << "Can't search an empty list!\n\n\n";
	}
	else
	{
		cout << "Who would you like to search for? ";
		getline(cin, name);

		cout << "\nSearching for " << name << "...\n";

		while (head != NULL && !found)
		{
			if (head->name == name)
			{
				cout << "Name:    " << head->name << endl;
				cout << "Gender:  " << head->gen << endl;
				cout << "Age:     " << head->age << "\n\n";
				found = true;
			}
			head = head->next;
		}

		if (!found)
		{
			cout << "I'm sorry, \"" << name << "\" was NOT found!\n\n";
		}
	}
}