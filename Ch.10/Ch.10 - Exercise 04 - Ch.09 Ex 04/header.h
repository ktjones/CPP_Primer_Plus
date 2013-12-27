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
//  Code Body - Namespace Declaration
//
//*******************************

namespace SALES
{


//*******************************
//
//  Code Body - Class Definitions
//
//*******************************

class Sales
{
	private:
		enum {QUARTERS = 4};
		double m_sales[QUARTERS];
		double m_average;
		double m_max;
		double m_min;

	public:
		Sales(double qsales[], int n);
		Sales();
		void setSales();
		void showSales();

};

//*******************************
//
//  Code Body - Function Protoypes
//
//*******************************

/*
const int QUARTERS = 4;
	struct Sales
	{
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};

void setSales(Sales & s, const double ar[], int n);
	// copies the lesser of 4 or n items from the array ar
	// to the sales member of s and computes and stores the
	// average, maximum, and minimum values of the entered items;
	// remaining elements of sales, if any, set to 0

void setSales(Sales & s);
	// gathers sales for 4 quarters interactively, stores them
	// in the sales member of s and computes and stores the
	// average, maximum, and minimum values

void showSales(const Sales & s);
	// display all information in structure s

}
*/

//*******************************
//
//  Code Body - Other Codes
//
//*******************************



//*******************************
//
//  Definition Statements - End
//
//*******************************

}

#endif