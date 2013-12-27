//*******************************
//
//  Chapter Review Questions
//
//*******************************

/* #. 

**************************************/

/* 1.


Stonewt operator*(double n);

Stonewt operator*(double n)
{

	Stonewt temp = Stonewt(lbs*n);
		
	return temp;
		
}

**************************************/
/* 2. 

Friend functions are not part of the class scope.  Therefore they cannot be called by class objects using the ".".

**************************************/
/* 3.

It has to be a friend to access private members, not public members.

**************************************/
/* 4. 

friend Stonewt operator*(double n, const Stonewt & st);

Stonewt operator*(double n, Stonewt & st)
{

	Stonewt temp = Stonewt(st.lbs*n);
		
	return temp;
		
}

**************************************/
/* 5. 


sizeof, . , .* , :: , ?: , typeid, const_cast, dynamic_cast, reinterpret_cast, static_cast

**************************************/
/* 6. 

They must be member functions.

**************************************/		
/* 7.

operator double();

operator double()
{
	return mag;
}



**************************************/


