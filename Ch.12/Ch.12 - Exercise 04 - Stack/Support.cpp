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
#include <cctype>  // or ctype.h
#include "header.h"

using namespace std;

//***************************************************************************************************
//
//  Support Program Section
//
//***************************************************************************************************

Stack::Stack(int n)    // create an empty stack
{
    size = n;
	pitems = new Item[size];	
	top = 0;
}

Stack::Stack(const Stack & st)    // create an empty stack
{
    size = st.size;
	top = st.top;
	pitems = new Item[size];	
	for (int i=0;i<size;i++)
	{
		pitems[i] = st.pitems[i];
	}

}

Stack::~Stack()    // create an empty stack
{
    
	delete [] pitems;	

}


bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item & item) 
{
    if (top < MAX)
    {
        pitems[top++] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        item = pitems[--top];
        return true;
    }
    else
        return false; 
}

Stack & Stack::operator=(const Stack & st)    // create an empty stack
{
    if (this == &st)
	{
		return *this;
	}
	
	size = st.size;
	top = st.top;
	delete [] pitems;
	pitems = new Item[size];	
	for (int i=0;i<size;i++)
	{
		pitems[i] = st.pitems[i];
	}
	
		
}