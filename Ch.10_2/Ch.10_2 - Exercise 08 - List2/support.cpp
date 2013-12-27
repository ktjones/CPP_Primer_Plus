// List.cpp -- List member functions
#include "header.h"
#include <iostream>

using namespace std;

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

bool List::push(const Item & item) 
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

bool List::pop(Item & item)
{
    if (top > 0)
    {
        item = items[--top];
        return true;
    }
    else
        return false; 
}

void List::visit (void (*pf)(Item & item))
{
	
	for (int i=0;i<top;i++)
	{
		(*pf)(items[i]);
	}
}

void List::showlist()
{
	for (int i=0;i<top;i++)
	{
		cout << items[i] << endl;
	}
}