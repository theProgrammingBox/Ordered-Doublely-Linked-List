#include"Header.h"

/**********************************************************
* CreateList
*----------------------------------------------------------
* This function will read in a file and create a linked
* list of people.
*
* returns nothing
**********************************************************/

void CreateList(Person*& head)	//INPUT	- Head of the list
{
	ifstream fin;	// IN		- File input
	Person* temp;	// CALC		- temporary pointer

	fin.open("input.txt");

	while (fin)
	{
		temp = new Person;
		getline(fin, temp->name);
		fin.get(temp->gen);
		fin >> temp->age;
		fin.ignore(numeric_limits<streamsize>::max(), '\n');
		fin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << "Adding : " << temp->name << endl;

		if (head == NULL || head->name > temp->name)
		{
			temp->next = head;
			temp->prev = NULL;
			head = temp;
		}
		else
		{
			Person* curr = head;
			while (curr->next != NULL && curr->next->name < temp->name)
			{
				curr = curr->next;
			}
			temp->next = curr->next;
			temp->prev = curr;
			curr->next = temp;
			if (temp->next != NULL)
			{
				temp->next->prev = temp;
			}
		}

	}
	cout << "\n\n";
	fin.close();
}