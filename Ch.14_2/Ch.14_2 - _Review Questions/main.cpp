//*******************************
//
//  Chapter Review Questions
//
//*******************************

// Example

/* #. 

**************************************/

/* 1. 

a. Bear/PolarBear = Public
b. Kitchen/Home = Private
c. Person/Programmer = Public
d. Person/HorseandJockey = Public
e. Person, Automobile/Driver = Public for Person, Private for Auto

**************************************/

/* 2. 

Gloam::Gloam(int g, const char * s) : fb(s), glip(g)
{
}

Gloam::Gloam(int g, const Frabjous & f) : fb(f), glip(g)
{
}

Gloam::tell()
{

	fb.tell();
	cout << endl << glip;

}

**************************************/

/* 3. 

Gloam::Gloam(int g, const char * s) : Frabjous(s), glip(g)
{
}

Gloam::Gloam(int g, const Frabjous & f) : Frabjous(f), glip(g)
{
}

Gloam::tell()
{

	Frabjous::tell();
	cout << endl << glip;

}


**************************************/

/* 4. 

class Stack<Worker *>
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

a. ArrayTP<string>
b. StackTP<ArrayTP<double>>
c. ArrayTP<StackTP<Worker *>>

**************************************/

/* 6. 

A non-virtual base class passes itself as an object off to the derived class.  A virtual base class only allows one inherited object.

**************************************/

