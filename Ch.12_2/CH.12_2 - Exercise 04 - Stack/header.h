//*******************************
//
//  C++ Template - Header File
//
//*******************************

//*******************************
//
//  Definition Statements - Begin
//
//*******************************

#ifndef HEADER_H_
#define HEADER_H_

//*******************************
//
//  Code Body - Begin
//
//*******************************

typedef unsigned long Item;

class Stack
{
	private:
		enum {MAX = 10}; // constant specific to class
		Item * pitems; // holds stack items
		int size; // number of elements in stack
		int top; // index for top stack item
	
	public:
		// Constructors
		Stack(int n = MAX); // creates stack with n elements
		Stack(const Stack & st);
		~Stack();
	
		// Regular Methods
		bool isempty() const;
		bool isfull() const;
		bool push(const Item & item); // add item to stack  // push() returns false if stack already is full, true otherwise
		bool pop(Item & item); // pop top into item  // pop() returns false if stack already is empty, true otherwise
		
		// Overloaded Operators
		Stack & operator=(const Stack & st);

};





//*******************************
//
//  Code Body - End
//
//*******************************


//*******************************
//
//  Definition Statements - End
//
//*******************************

#endif