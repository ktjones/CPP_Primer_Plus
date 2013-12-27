//*******************************
//
//  Chapter Review Questions
//
//*******************************

//1. Multiplication overload - member function
/*
	stonewt todd = stonewt(19,2);
	stonewt bob;
	double factor = 2;

	bob = todd * 2;  // bob = todd.operator*(2);

	operator*(double f)
	{
		return stonewt(pounds*f)
	}
*/

//2. A member function, when called, uses itself as the first argument.  The member function is called using the membership operator, and can access private data implicitly.
//	 A friend function is not part of the class, and is invoked as you would any other function (without the "." membership operator).  The friend function can access private
//	 data explicitly using the membership operator on an object passed to it through its argument list.

//3. Yes, for private members.

//4. Multiplication overload - friend function
/*
	stonewt todd = stonewt(19,2);
	stonewt bob;
	double factor = 2;

	bob = todd * 2;  // bob = todd.operator*(2);

	operator*(stonewt s, double f)
	{
		return stonewt(s.pounds*f)
	}
*/

//5. Those shown in table found on page 573.

//6. They can only be overloaded as member functions.

//7. 
/*
	vector::operator double()
	{

		return mag;

	}



