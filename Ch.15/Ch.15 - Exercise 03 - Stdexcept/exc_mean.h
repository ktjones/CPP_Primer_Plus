// exc_mean.h  -- exception classes for hmean(), gmean()
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

class base_bad_mean: public logic_error
{

	private:

		double v1;
		double v2;

	public:

		base_bad_mean(const string & s, double a, double b) : logic_error(s), v1(a), v2(b) {}
		virtual void mesg();

};

inline void base_bad_mean::mesg()
{

	cout << "Values used: " << v1 << ", " << v2 << endl;

}

class bad_hmean : public base_bad_mean
{
	private:
		
	
	public:
		//constructor
		bad_hmean(const string & s, double a, double b) : base_bad_mean(s,a,b) {}

		//methods
		void mesg();
};

inline void bad_hmean::mesg()
{   
    std::cout << "hmean: invalid arguments: a = -b\n" << endl;
	base_bad_mean::mesg();
	std::cout << endl;
}

class bad_gmean : public base_bad_mean
{
	public:
		//constructor
		bad_gmean(const string & s, double a, double b) : base_bad_mean(s,a,b) {}
		
		//methods
		void mesg();
};

inline void bad_gmean::mesg()
{  
	base_bad_mean::mesg();
	cout << endl;
	cout << "gmean() arguments should be >= 0\n";
	return;
}
