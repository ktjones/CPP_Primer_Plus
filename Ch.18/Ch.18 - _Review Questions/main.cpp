//*******************************
//
//  Chapter Review Questions
//
//*******************************

// Example

/* #. 


**************************************/

/* 1. 

class Z200
{

	private:

		int j;
		char ch;
		double z;

	Public:

		Z200(int jv, char chv, double zv) : j(jv), ch(chv), z(zv) {}

}

	double x {8.8};
	std::string s {"What a bracing effect!"};
	int k{99};
	Z200 zip{200, 'Z', 0.675};
	std::vector<int> ai {3, 9, 4, 7, 1};
	

**************************************/

/* 2. 

a.  r1(w) 	 - valid, w is an LVALUE
b.	r1(w+1)  - valid, Copy Constructor is called for the temp object
c.  r1(up(w))- valid, Copy Constructor is called for the temp object returned from up
d.  r2(w)	 - valid, Copy Constructor is called
e.	r2(w+1)	 - invalid, RVALUE cannot be passed to a non-const LVALUE parameter
f.  r2(up(w))- invalid, RVALUE cannot be passed to a non-const LVALUE parameter
g.	r3(w)	 - invalid, cannot pass an LVALUE to a non-const RVALUE paramter
h.  r3(w+1)	 - valid, (w+1) is an RVALUE
i.  r3(up(w) - valid, the return value is an RVALUE


**************************************/

/* 3. 

a.  
	double & rx
	const double & rx
	const double & rx

b.
	double & rx
	double && rx
	double && rx

c.
	const double & rx
	double && rx
	double && rx

**************************************/

/* 4.

a. default constructor, copy constructor, assignment constructor, move constructor, move assignment constructor
b. if you don't define them, the compiler will do it for you.


**************************************/

/* 5. 

A move constructor can be used when it makes sense to transfer ownership of data
instead of copying it, but there is no mechanism for transferring ownership of a
standard array. If the Fizzle class used a pointer and dynamic memory allocation,
then one can transfer ownership by reassigning the address of the data to a new
pointer.  (Book answer - I am not sure I understand it)

**************************************/

/* 6. 

#include <iostream>

template<typename T>
void show2(double x, T& fp) {std::cout << x << " -> " << fp(x) << '\n';}

int main()
{
	show2(18.0, [](double x) { return 1.8*x + 32;});
	return 0;
}

**************************************/

/* 7. 

#include <iostream>
#include <array>

const int Size = 5;
template<typename T>
void sum(std::array<double,Size> a, T& fp);

int main()
{
	double total = 0.0;
	std::array<double, Size> temp_c = {32.1, 34.3, 37.8, 35.2, 34.7};
	sum(temp_c,[&total](double w){total += w;});
	std::cout << "total: " << total << '\n';
	std::cin.get
	return 0;
}

template<typename T>
void sum(std::array<double,Size> a, T& fp)
{
	for(auto pt = a.begin(); pt != a.end(); ++pt)
	{
		fp(*pt);
	}
}

**************************************/

