//*******************************
//
//  Chapter Review Questions
//
//*******************************

// Example

/* #. 

**************************************/

/* 1. 

a. "friend clasp" should read "friend class clasp"

b. Class Muff needs a forward declaration so that "void snip(muff &)" is understood by the compiler.

c. Class Muff should have a forward declaration and precede Class Cuff.  Class Cuff should then precede the Class Muff body.

**************************************/

/* 2.

No.  In order for members of B to be friends with class A Class B would need to be fully defined.  A forward statement would not work, as it only declares the class name.  To do the same with A to B you would 
need to have A fully developed.  Both of these things cannot happen at the same time.

**************************************/

/* 3. 

Class Sauce is declared in the private portion of Ribs, making only the public portions of Sauce available to Ribs.  Since there is only one method (the Sauce constructor) available then the only thing that
Ribs can do is create Sauce objects.

**************************************/

/* 4.

Return transfers control of the program from the called function back to the calling function when execution is completed.  
Throw halts execution and tries to transfer control to the next in line Try/Catch block, where execution can resume.

**************************************/

/* 5. 

From lowest in the heirarchy up to the base class.

**************************************/

/* 6. 

a. Sample #1 - The IF statement may be TRUE or FALSE depending on what PG points to.  If PG points to a Superb Class object, or an object of a class derived from a Superb Class object it will be TRUE.

b. Sample #2 - Nothing will happen unless the statement has an exact match to a Superb Class object.  The condition will fail and the line will be skipped.


**************************************/

/* #. 

Dynamic Cast allows for upcasting within an class heirarchy.  Static Cast allows Up and Downcasting within the heirarchy.  Static Cast also allows conversions between Enumeration and Interger types.

**************************************/