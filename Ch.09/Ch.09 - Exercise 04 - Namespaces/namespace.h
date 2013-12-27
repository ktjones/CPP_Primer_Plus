#ifndef NAMESPACE_H_
#define NAMESPACE_H_

namespace SALES
{
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

#endif