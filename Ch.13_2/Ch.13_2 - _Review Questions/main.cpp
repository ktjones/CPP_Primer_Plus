//*******************************
//
//  Chapter Review Questions
//
//*******************************

// Example

/* #. 


**************************************/

/* 1. Public section become part of the public section, the protected section becomes part of the protected section, the private sections are inherited, but not accessible.


**************************************/

/* 2. Costructors, Destructors, Assignment Operator, Friends. 

**************************************/

/* 3. 

a. It would prevent a chain type statement like a = b = c from occuring. 
b. A copy would be returned.  This would only matter if the calling statement meant to alter the contents of the original object.

**************************************/

/* 4.

a. Created: Base Constructor, Derived Constructor
b. Destroyed: Derived Destructor, Base Destructor

**************************************/

/* 5. 

a. Yes.  Every class needs a default constructor.

**************************************/

/* 6.   The derived class method.

**************************************/

/* 7.   When the class uses NEW.

**************************************/

/* 8.

a.  Yes - The Base Class Pointer can reference Base Class items contained in the Derived Class Object.
b.  No - The Derived Class Pointer cannot reference Derived Class items because they are NOT contained in the Base Class Object.


**************************************/

/* 9. 

a. Yes.  The assignment copies the base class components.
b. Maybe.  Only if a conversion constructor is defined, or an assignment operator is defined that takes the base class type.


**************************************/

/* 10. The pointer is allowed to represent derived class objects because the derived class object contains Base Class information.


**************************************/

/* 11. Same answer as #10. 


**************************************/

/* 12. Its quicker. No copy constructor calls.  No temp objects.


**************************************/

/* 13. 

a. Base class version is called. 
b. Derived class version is called.


**************************************/

/* 14.

a. The inheritance doesn't model an "IS A" relationship (and they derivation is backwards for a "HAS A" relationship.
b. The House derived class doesn't call the Kitchen Constructor.
c. No destructor is defined.
d. The House class tries to access "kit_sq_ft" directly, which isn't allowed.
e. The AREA method has inconsistent arguments.

**************************************/


