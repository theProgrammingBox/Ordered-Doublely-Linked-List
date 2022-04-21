#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <limits>
#include <ios>

using namespace std;

struct Person
{
	string name;
	char gen;
	int age;
	Person* prev = NULL;
	Person* next = NULL;
};

enum Option
{
	EXIT, CREATE, DISPLAY, ISEMPTY, SEARCH, REMOVE, CLEAR
};

/**********************************************************
* CreateList
*----------------------------------------------------------
* This function will read in a file and create a linked
* list of people.
*
* returns nothing
**********************************************************/

void CreateList(Person*& head);	//INPUT	- Head of the list

/**********************************************************
* DisplayList
*----------------------------------------------------------
* This function will display the contents of the list.
*
* returns nothing
**********************************************************/

void DisplayList(Person* head);	//INPUT	- Head of the list

/**********************************************************
* IsEmpty
*----------------------------------------------------------
* This function will check if the list is empty.
*
* returns nothing
**********************************************************/

void IsEmpty(Person* head);	//INPUT	- Head of the list

/**********************************************************
* SearchByName
*----------------------------------------------------------
* This function will search for a person by name and
* display their information.
*
* returns nothing
**********************************************************/

void SearchByName(Person* head);	//INPUT	- Head of the list

/**********************************************************
* RemoveNode
*----------------------------------------------------------
* This function will remove a node from the list and
* display the contents of the node removed.
*
* returns nothing
**********************************************************/

void RemoveNode(Person*& head);	//INPUT	- Head of the list

/**********************************************************
* ClearList
*----------------------------------------------------------
* This function will clear the list and display all the
* nodes that were removed.
*
* returns nothing
**********************************************************/

void ClearList(Person*& head);	//INPUT	- Head of the list