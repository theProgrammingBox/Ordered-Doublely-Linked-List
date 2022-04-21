#include "Header.h"

/**********************************************************
* Creating an Ordered List
*_________________________________________________________
* This program will first prompt the user to either create
* a list of people, display the list, check if the list is
* empty, search for a person by name, remove a person from
* the list, or clear the list. The program will run until
* the user enters 0 to exit.
*_________________________________________________________
* INPUTS:
*   input:	User option input
*
* OUTPUTS:
*   head:	The head of the list
***********************************************************/

int main()
{
	Person* head = NULL;	// CALC	- Head of the list
	int input;				// INPUT- User option input
	bool running;			// CALC - Tells if program is running
	bool invalid;			// CALC - Tells if the user input is invalid

	running = true;

	do
	{
		do
		{
			cout << "LIST MENU:\n";
			cout << "1 - Create List\n";
			cout << "2 - Display List\n";
			cout << "3 - Is the list empty?\n";
			cout << "4 - Search by name\n";
			cout << "5 - Remove Node\n";
			cout << "6 - Clear List\n";
			cout << "0 - to Exit\n";
			cout << "Enter a command (0 to exit): ";

			if (!(cin >> input))
			{
				cout << "\n**** Please input a NUMBER between 0 and 6 ****\n\n";
				cin.clear();
				invalid = true;
			}
			else if (input < 0 || input > 6)
			{
				cout << "\n**** The number " << setw(5) << input << " is an invalid entry  ****\n";
				cout << "**** Please input a number between 0 and 6 ****\n\n";
				invalid = true;
			}
			else
			{
				cout << endl;
				invalid = false;
			}
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		} while (invalid);

		switch (input)
		{
		case EXIT:
			running = false;
			break;
		case CREATE:
			CreateList(head);
			break;
		case DISPLAY:
			DisplayList(head);
			break;
		case ISEMPTY:
			IsEmpty(head);
			break;
		case SEARCH:
			SearchByName(head);
			break;
		case REMOVE:
			RemoveNode(head);
			break;
		case CLEAR:
			ClearList(head);
			break;
		default:
			cout << "ERROR: Invalid input!\n\n";
			break;
		}
	} while (running);

	return 0;
}