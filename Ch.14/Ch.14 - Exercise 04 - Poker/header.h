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

using namespace std;

//*******************************
//
//  Code Body - Begin
//
//*******************************


class Person
{

	private:

		string fname;
		string lname;

	public:

		//constructors
		Person(string f = "N/A", string l = "N/A");
		virtual ~Person();

		//other methods
		virtual void Show();

};

class GunSlinger : virtual public Person
{

	private:

		double draw;
		int notches;
		
	public:

		//constructors
		GunSlinger(int n=0, double d=0, string f="N/A", string l="N/A");
		virtual ~GunSlinger();

		//other methods
		virtual double Draw();
		virtual void Show();

}; 

class PokerPlayer : virtual public Person
{

	private:

		int nCardDrawn;

	public:

		//constructors
		PokerPlayer(int nc = 0, string f="N/A", string l="N/A");
		virtual ~PokerPlayer();


		//other methods
		virtual void Show();
		virtual int Draw();


};

class BadDude : public GunSlinger, public PokerPlayer
{


	private:
	 
		

	public:

		//constructors
		BadDude(int nc=0, int n=0, double d=0, string f="N/A", string l="N/A");
		virtual ~BadDude();

		//other methods
		double GDraw();
		int CDraw();
		virtual void Show();

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