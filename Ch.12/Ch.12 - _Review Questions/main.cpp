//*******************************
//
//  Chapter Review Questions
//
//*******************************

//1. String Class Question
//1a. The constructor does not initialize the private pointer.
//1b. This copies the address of s to str.  If the space allocated for s is deleted, then str will be deleted as well.
//1c. This copies the string without allocating the space to hold it.

//2. Name 3 issues that may arise if you define a class in which NEW is used.
//  A1: When the object expires, the memory pointed to remains in memory.  Have the class destructor delete the allocated memory.
//	A2: Allocated memory may be deleted twice (bad) if a poor copy process was implemented (shallow copying).
//	A3: Allocated memory may be deleted twice (bad) if a poor assignment process was implemented (shallow copying).

//3. Default Constructor if none are provided, Default Constructor if one is not defined, Copy Constructor if one is not defined, Assignment Operator is one is not defined, and Address Operator if one is not defined.

//4. Identify Errors
//	A1: Private and Public headers are missing
//	A2: Private member "personality" is shown as an array without size (should be pointer).
//	A3: nifty does not have a copy constructor
//	A4: nifty does not have an assignment operator
//	A5: ostream is not declared as a friend function
//	A5: nifty::nifty(char * s) initializes "personality" using new, and then fails to use strcopy to make a deep copy of s.
//	A6: ostream should return a reference to os (return & os)
//	A7: CONST should be used in various places.

//5a.  Golfer Class part a.
//	A1: Golfer()
//	A2: Golfer(const char * name, int g = 0)
//	A3: same as A2
//	A4: Golfer()
//	A5: Golfer(const Golfer & g)
//	A6: Golfer(const char * name, int g = 0)
//	A7: default assignment operator
//	A8: Golfer(const char * name, int g = 0) AND Same as A7 

//5b.  Golfer Class part b.
//	A1: An assignment operator should be added.

