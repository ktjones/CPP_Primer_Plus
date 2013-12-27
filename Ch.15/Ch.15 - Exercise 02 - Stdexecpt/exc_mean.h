// exc_mean.h  -- exception classes for hmean(), gmean()
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

class bad_hmean : public logic_error
{
	private:
		// double v1;
		// double v2;
	
	public:
		//constructor
		bad_hmean(const string & s) : logic_error(s) {}

		//methods
		void mesg();
};

inline void bad_hmean::mesg()
{   
    std::cout << "hmean: invalid arguments: a = -b\n";
}

class bad_gmean : public logic_error
{
	public:
		//data
		// double v1;
		// double v2;

		//constructor
		bad_gmean(const string & s) : logic_error(s) {}
		
		//methods
		const char * mesg();
};

inline const char * bad_gmean::mesg()
{  
    return "gmean() arguments should be >= 0\n";
}
