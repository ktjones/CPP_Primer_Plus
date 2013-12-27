#ifndef HEADER_H_
#define HEADER_H_

// golf.h -- for pe9-1.cpp


// non-interactive version:
// function sets golf structure to provided name, handicap
// using values passed as arguments to the function



// interactive version:
// function solicits name and handicap from user
// and sets the members of g to the values entered
// returns 1 if name is entered, 0 if name is empty string



// function resets handicap to new value



// function displays contents of golf structure




class golf
{
	
	private:
		const static int Len = 40;
		char m_fullname[Len];
		int m_handicap;
	public:
		golf(const char * name = "", int hc = 0);
		~golf();
		int setgolf();
		void handicap(int hc);
		void showgolf();

};


#endif