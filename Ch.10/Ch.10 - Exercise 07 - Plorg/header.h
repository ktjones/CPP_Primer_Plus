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

class plorg
{
	private:
		char m_fname[19];
		int m_CI;

	public:
		plorg(char name[] = "Plorga", int CI = 50);
		void plorgmood();
		void plorgshow();
		
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