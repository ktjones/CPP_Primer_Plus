//*******************************
//
//  Chapter Review Questions
//
//*******************************

// Example

/* #. 


**************************************/

/* 1. 

class RQ1
{
	private:
		//char * st; // points to C-style string
		string st;

	public:
		// RQ1() { st = new char [1]; strcpy(st,""); }
		RQ1() { st = ""; }
		// RQ1(const char * s)	{st = new char [strlen(s) + 1]; strcpy(st, s); }
		RQ1(const char * s)	{st = s; }
		// RQ1(const RQ1 & rq)	{st = new char [strlen(rq.st) + 1]; strcpy(st, rq.st); }
		// ~RQ1() {delete [] st};
		~RQ1() {};
		// RQ & operator=(const RQ & rq);
		// more stuff
};

b.  Destructor, assignment operator, copy constructor. Furthermore, we could use initializer lists instead of {}.

**************************************/

/* 2. 

direct assignment using =, memory management is handled internally.



**************************************/

/* 3. 

string & uppercase (string & s)
{

	for (int i=0; i < s.size();i++
	{
		s[i] = toupper(s[i]);
	}

	return s;

}

**************************************/

/* 4.

a. auto_ptr<int> pia(new int[20]); - Wrong.  Auto Ptr doesn't use [].
b. auto_ptr<string> (new string);  - Wrong.  No name specified for the PTR.
   int rigue = 7;
c. auto_ptr<int>pr(&rigue); - Wrong. No space allocated for PTR.
d. auto_ptr dbl (new double); - Wrong.  dbl should be <dbl>, and no PTR name specified.

**************************************/

/* 5. 

It could take a long time to get to the club you wanted, since you would have to take them out 1 at a time, in the order they were placed in the bag.

**************************************/

/* 6. 

In a set you can only have one instance of a value, which would make keeping golf scores difficult if you had the same score on multiple holes

**************************************/

/* 7. 

The iterator is more generic, allowing for more types than just the pointer to be used. This is helpful when the data object is in some structure other than an array.

**************************************/

/* 8. 

Keeping the interface flat (no inheritance) allows for a broader use of iterators when programming

**************************************/

/* 9. 

memory management is automatic, you can assign them to one another, built in features like at() help check boundary conditions.

**************************************/

/* 10. 
a.  Which parts become invalid?
The following 2 algorithms won't work:  sort(), random_Shuffle().  Both require a random access iterator
and the LIST container uses a bidirectional iterator only.

b.  Can they be fixed easily?
The sort() algorithm can be changed to a sort() method with the class, but the random_shuffle cannot be replaced.


**************************************/

/* 11. 
- Creates an anonymous TooBig object, using 10 to initialize the object through the constructor
- The anonymous object is passed the value of 15 through the overloaded () operators.
- 15 is compared to 10, returning a TRUE
- Then, the left hand side is evaluated, creating a variable of type bool named bo.
- Lastly, the right hand value is assigned to the left hand object, bo = TRUE.