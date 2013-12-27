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

#include <string>
#include <iostream>
#include <valarray>

using namespace std;


/*******************************************************************************************************/

// Pair Template & Definitions

template <class T1, class T2>
class Pair
{
	private:
		
		T1 a;
		T2 b;

	public:
		
		// constructors
		Pair() {}
		Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval) { }

		// other methods
		T1 & first();
		T2 & second();
		T1 first() const { return a; }
		T2 second() const { return b; }
		
};

template<class T1, class T2>
T1 & Pair<T1,T2>::first()
{
    return a;
}
template<class T1, class T2>
T2 & Pair<T1,T2>::second()
{
    return b;
}

/*******************************************************************************************************/

// Wine Class

class Wine
{

	private:

		string name;							// Name of wine
		Pair<valarray<int>,valarray<int>> data;	// A Pair of Valarray objects holding ints.  The first member is for the years, The second member is # of bottles for each year.
		int years;								// # of entries in the array.		

	public:

		// Constructors
		Wine();
		Wine(const char * l, int y, const int yr[], const int bot[]);
		Wine(const char * l, int y);
		
		// Other Methods
		void GetBottles();
		string & Label();
		int Sum();
		void Show();


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