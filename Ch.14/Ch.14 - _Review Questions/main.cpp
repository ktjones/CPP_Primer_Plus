//*******************************
//
//  Chapter Review Questions
//
//*******************************

// Example

/* #. 

**************************************/

/* 1. 

Class PolarBear IS A type of Class Bear : Public Inheritance
Class Home HAS A Class Kitchen : Private inheritance
Class Programmer IS A type of Class Person : Public Inheritance
Class HorseandJockey HAS A Class Person : Private Inheritance
Class Driver IS A Class Person and HAS A Class Automobile : Public Inheritance, Private Inheritance

**************************************/

/* 2.

Gloam (int g, const char * s) : glip(g), fb(s)		// fb(s) uses the defined contructor
{
}

Gloam (int g, const frabjous & f) : glip(g), fb(f)   // fb(f) uses the default copy constructor
{
}

tell()
{
	cout << glip << endl;
	fb.tell();
}

**************************************/

/* 3.

Gloam (int g, const char * s) : glip(g), Frabjous(s)		// Frabjous(s) uses the defined contructor
{
}

Gloam (int g, const frabjous & f) : glip(g), Frabjous(f)   // Frabjous(f) uses the default copy constructor
{
}

tell()
{
	cout << glip << endl;
	Frabjous::tell();
}

**************************************/

/* 4.

#ifndef STACKTP_H_
#define STACKTP_H_

class Stack
{
	private:
		enum {MAX = 10}; // constant specific to class
		Worker * items[MAX]; // holds stack items
		int top; // index for top stack item
	public:
		Stack();
		bool isempty();
		bool isfull();
		bool push(const Worker * & item); // add item to stack
		bool pop(Worker * & item); // pop top into item
};

**************************************/

/* 5.

ArrayTP<string, 20>
StackTP<ArrayTP<double, 20>>
ArrayTP<Stack<Worker *>>

**************************************/

/* 6.

A virtual base class prevents a derived class at a lower level to inherit more than one copy of the base class.



*/