// stack.h -- class definition for the stack ADT
#ifndef HEADER_H_
#define HEADER_H_

typedef unsigned long Item;

class List
{
private:
    enum {MAX = 10};    // constant specific to class
    Item items[MAX];    // holds stack items
    int top;            // index for top stack item
public:
    List();
    bool isempty() const;
    bool isfull() const;
    // push() returns false if stack already is full, true otherwise
    bool push(const Item & item);   // add item to stack
    // pop() returns false if stack already is empty, true otherwise
    bool pop(Item & item);          // pop top into item
	void visit (void (*pf)(Item & item));
	void showlist();

};
#endif
