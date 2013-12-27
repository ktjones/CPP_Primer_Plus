//*******************************
//
//  C++ Template Program - Support Files
//
//*******************************

//*******************************
//
//  Standard Header
//
//*******************************

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include "header.h"

using namespace std;

//***************************************************************************************************
//
//  Support Program Section
//
//***************************************************************************************************

List::List()    // create an empty List
{
    top = 0;
}

bool List::isempty() const
{
    return top == 0;
}

bool List::isfull() const
{
    return top == MAX;
}

bool List::add(const Item & item) 
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

void List::visit(void (*pf) (Item &))
{
	for (int i=0;i<top;i++)
	{
		(pf)(items[i]);
	}

	return;
}

void List::showlist()
{
	for (int i=0;i<top;i++)
	{
		cout << endl;
		cout << "Customer Name: " << items[i].fullname << endl;
		cout << "Customer Payment: " << items[i].payment << endl;
	}

	return;

}
