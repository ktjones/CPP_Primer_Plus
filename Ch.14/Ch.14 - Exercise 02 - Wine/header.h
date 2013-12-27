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

#include <string>
#include <valarray>


//*******************************
//
//  Code Body - Begin
//
//*******************************

template <class T1, class T2>
class Pair
{
	private:
		T1 a;
		T2 b;
	public:
		T1 & first();
		T2 & second();
		T1 first() const { return a; }
		T2 second() const { return b; }
		Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval) { }
		Pair() {}
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


class Wine : private std::string, private Pair<std::valarray<int>,std::valarray<int>>
{

	private:

		//std::string m_name;
		int years;
		//Pair <std::valarray<int>,std::valarray<int>> m_data;

	public:
		
		// constructors
		Wine();	// default constructor
		Wine(const char * l, int y, const int yr[], const int bot[]);
				// initialize label to l, number of years to y,
				// vintage years to yr[], bottles to bot[]
		Wine(const char * l, int y);
				// initialize label to l, number of years to y,
				// create array objects of length y

		// methods
		void GetBottles();
		std::string & Label();
		int sum();
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