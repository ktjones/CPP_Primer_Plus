//*******************************
//
//  Chapter Review Questions
//
//*******************************

//1.	A class is a C++ vehicle for translating an abstraction to a user-defined type.

//2.	Abstraction:  Use of the class to define operations on the user defined data type.
//		Data Hiding:  Details of the implementation are not accessible to the calling program.
//		Encapsulation:  Use of the private functions to hide data and information from the calling program.

//3.	The class defines the "type".  The object is a variable of the class (or type).

//4.	Data objects have separate memory space for each object instance (class variable).  However, only
//		one block of memory is allocated for class functions, no matter how many instances are created.

//5.	
	#include <string>
	using namespace std;
/*
	class BankAccount
	{
		private:
		string m_customername;
		string m_accountnumber;
		double m_accountbalance;
	public:
		BankAccount(string & name, string & accountnumber, double amount = 0.0);
		~BankAccount();
		void Display () const;
		void Deposit (string customername, string accountnumber, double amount);
		void Withdrawal (string customername, string accountnumber, double amount);
	};
*/

//6.	When a class object is initialized.  When a class object goes out of scope.

//7.	
/*		BankAccount::BankAccount(string & name, string & accountnumber, double amount = 0.0)
		{
			m_customername = name;
			m_accountnumber = accountnumber;
			m_balance = amount;
		}
*/

//8.	A constructor that is used to create an object when you don't provide explicit initialization
//		values.  

//9.
/*
	class Stock
	{
	private:
		std::string company;
		int shares;
		double share_val;
		double total_val;
		void set_tot() { total_val = shares * share_val; }
	public:
		Stock(); // default constructor
		Stock(const std::string & co, long n = 0, double pr = 0.0);
		~Stock(); // do-nothing destructor
		void buy(long num, double price);
		void sell(long num, double price);
		void update(double price);
		void show()const;
		const Stock & topval(const Stock & s) const;
		const string & getname() const {return company;};
		int getshares() const {return shares;};
		double getsharevalue() const {return share_val;};
		double gettotalvalue() const {return total_val;};
	};
*/

//10.	"this" is a pointer to the calling object.  "*this" is the object itself.
