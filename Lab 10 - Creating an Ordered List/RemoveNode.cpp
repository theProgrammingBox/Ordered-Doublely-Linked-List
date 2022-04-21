#include "Header.h"

/**********************************************************
* RemoveNode
*----------------------------------------------------------
* This function will remove a node from the list and
* display the contents of the node removed.
*
* returns nothing
**********************************************************/

void RemoveNode(Person*& head)	//INPUT	- Head of the list
{
	Person* temp = head;	// CALC		- Tempory pointer to the list
	bool found;				// CALC		- True if node is found
	string name;			// INPUT	- Name of the node to be removed

	found = false;

	if (head == NULL)
	{
		cout << "Can't remove from an empty list!\n\n\n";
	}
	else
	{
		cout << "Who would you like to remove? ";
		getline(cin, name);

		cout << "\nSearching for " << name << "...\n";

		while (temp != NULL && !found)
		{
			if (temp->name == name)
			{
				cout << "Removing " << temp->name << "!\n\n\n";
				found = true;
				if (temp->prev == NULL)
				{
					if (temp->next == NULL)
					{
						head = NULL;
					}
					else
					{
						temp->next->prev = NULL;
						head = temp->next;
					}
				}
				else
				{
					if (temp->next == NULL)
					{
						temp->prev->next = NULL;
					}
					else
					{
						temp->prev->next = temp->next;
						temp->next->prev = temp->prev;
					}
				}
				delete temp;
			}
			else
			{
				temp = temp->next;
			}
		}

		if (!found)
		{
			cout << "I'm sorry, \"" << name << "\" was NOT found!\n\n";
		}
	}
}