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

using namespace std;

class Person
{

	private:

		string fname;
		string lname;
		
	public:

		// constructor
		Person(string f = "n/a", string l = "n/a");
		virtual ~Person() = 0;

		// other methods
		virtual void Show();
		virtual void Set();
			
};

class GunSlinger : virtual public Person
{

	private:

		double dtime;
		int notches;

	public:

		// constructors
		GunSlinger(string f = "n/a", string l = "n/a", double d = 0.0, int n = 0);
		virtual ~GunSlinger();

		// other methods
		double Draw();
		void Data();
		virtual void Show();
		virtual void Set();

};

class PokerPlayer : virtual public Person
{

	private:

	
	public:

		// constructors
		PokerPlayer(string f = "n/a", string l = "n/a");
		virtual ~PokerPlayer();

		// other methods
		int Draw();
		void Data();
		virtual void Set();
		virtual void Show();
};

class BadDude : public PokerPlayer, public GunSlinger
{

	private:



	public:

		// constructors
		BadDude(string f = "n/a", string l = "n/a", double d = 0.0, int n = 0);
		~BadDude();

		// other methods
		double gDraw();
		int cDraw();
		void Data();
		void Show();
		virtual void Set();
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