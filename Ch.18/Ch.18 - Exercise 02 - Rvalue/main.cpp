//***************************************************************************************************
//
//  C++ Template Program
//
//***************************************************************************************************
//*******************************
//
//  Standard Header
//
//*******************************

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


//********************************
//
//  Global Variable Declaration
//
//********************************





//********************************
//
//  Compound Type Declaration Section
//
//********************************

class Cpmv
{
public:
	struct Info
	{
		std::string qcode;
		std::string zcode;
	};
private:
	Info * pi;
public:
	Cpmv();
	Cpmv(std::string q, std::string z);
	Cpmv(const Cpmv & cp);
	Cpmv(Cpmv && mv);
	~Cpmv();
	Cpmv & operator=(const Cpmv & cp);
	Cpmv & operator=(Cpmv && mv);
	Cpmv operator+(const Cpmv & obj) const;
	void Display() const;
};

Cpmv::Cpmv()
{

	pi = new Info;

	pi->qcode = "";
	pi->zcode = "";

	cout << endl;
	cout << "Ctor: Default";
	cout << endl;

}

Cpmv::Cpmv(std::string q, std::string z)
{

	pi = new Info;

	pi->qcode = q;
	pi->zcode = z;

	cout << endl;
	cout << "Ctor: Strings";
	cout << endl;

	return;

}

Cpmv::Cpmv(const Cpmv & cp)
{

	pi = new Info;

	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;

	cout << endl;
	cout << "Ctor: Copy";
	cout << endl;

	return;

}

Cpmv::Cpmv(Cpmv && mv)
{

	pi = mv.pi;

	mv.pi = nullptr;
	
	cout << endl;
	cout << "Ctor: Move";
	cout << endl;

	return;

}

Cpmv::~Cpmv()
{

	delete pi;

	cout << endl;
	cout << "Dtor: Default";
	cout << endl;

	return;

}

Cpmv & Cpmv::operator=(const Cpmv & cp)
{

	delete pi;

	pi = new Info;

	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;

	cout << endl;
	cout << "Operator=: Copy";
	cout << endl;

	return *this;

}

Cpmv & Cpmv::operator=(Cpmv && mv)
{

	delete pi;

	pi = mv.pi;

	mv.pi = nullptr;

	cout << endl;
	cout << "Operator=: Move";
	cout << endl;

	return *this;


}

Cpmv Cpmv::operator+(const Cpmv & obj) const
{

	Cpmv temp;

	temp.pi = new Info;

	temp.pi->qcode = pi->qcode + obj.pi->qcode;
	temp.pi->zcode = pi->zcode + obj.pi->zcode;

	cout << endl;
	cout << "Operator+: Copy";
	cout << endl;

	return temp;

}

void Cpmv::Display() const
{

	cout << endl << endl;

	cout << "Displaying Output:" << endl;
	cout << "qcode: " << pi->qcode << endl;
	cout << "zcode: " << pi->zcode << endl;

	return;

}


//********************************
//
//  Function Declaration Section
//
//********************************





//***************************************************************************************************
//
//  Main Program Section
//
//***************************************************************************************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	

	//*  Main Code
	Cpmv object1 = {};
	object1.Display();

	Cpmv object2 = { "bob", "sue" };
	object2.Display();

	object1 = object2;
	object1.Display();

	Cpmv object3 = {};
	object3 = object1 + object2;
	object3.Display();


	//*  Program End
	//   - wait until user is ready before terminating program
	//   - to allow the user to see the program results

	cout << endl << endl;
	system("PAUSE");
	return 0;
}

//***************************************************************************************************
//
//  Functions Begin Here
//
//***************************************************************************************************

//********************************
//
//	Function #1
//

    //*  Variable Declaration

	//*  Main Code

	//*  Program End

//********************************
