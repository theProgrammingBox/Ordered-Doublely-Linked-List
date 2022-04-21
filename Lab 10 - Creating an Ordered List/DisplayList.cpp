#include"Header.h"

/**********************************************************
* DisplayList
*----------------------------------------------------------
* This function will display the contents of the list.
*
* returns nothing
**********************************************************/

void DisplayList(Person* head)	//INPUT	- Head of the list
{
	int count = 1;	//CALC	- Counts the number of nodes in the list

	if (head == NULL)
	{
		cout << "Can't display an empty list!\n\n\n";
	}
	else
	{
		cout << "   #    NAME                        gen   AGE\n";
		cout << "------- -------------------------  -------- -----\n";
		while (head != NULL)
		{
			cout << right;
			cout << setw(4) << count;
			cout << left << "     ";
			cout << setw(29) << head->name;
			cout << setw(7) << head->gen;
			cout << setw(5) << head->age;
			cout << endl;
			head = head->next;
			count++;
		}

		cout << "\n\n";
	}
}