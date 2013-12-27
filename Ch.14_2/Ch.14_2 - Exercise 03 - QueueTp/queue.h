// queue.h -- interface for a queue

#ifndef QUEUE_H_
#define QUEUE_H_

#include <cstdlib>

// This queue will contain Customer items

template<typename T>
class QueueTp
{
private:
// class scope definitions
    // Node is a nested structure definition local to this class
    struct Node { T item; struct Node * next;};
    enum {Q_SIZE = 10};
	// private class members
    Node * front;       // pointer to front of Queue
    Node * rear;        // pointer to rear of Queue
    int items;          // current number of items in Queue
    const int qsize;    // maximum number of items in Queue
    // preemptive definitions to prevent public copying
    QueueTp(const QueueTp & q) : qsize(0) { }
    QueueTp & operator=(const QueueTp & q) { return *this;}
public:
    QueueTp(int qs = Q_SIZE); // create queue with a qs limit
    ~QueueTp();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const T &item); // add item to end
    bool dequeue(T &item);       // remove item from front
};

// Queue methods
template<typename T>
QueueTp<T>::QueueTp(int qs) : qsize(qs)
{
    front = rear = NULL;    // or nullptr
    items = 0;
}

template<typename T>
QueueTp<T>::~QueueTp()
{
    Node * temp;
    while (front != NULL)   // while queue is not yet empty
    {
        temp = front;       // save address of front item
        front = front->next;// reset pointer to next item
        delete temp;        // delete former front
    }
}

template<typename T>
bool QueueTp<T>::isempty() const
{
    return items == 0;
}

template<typename T>
bool QueueTp<T>::isfull() const
{
    return items == qsize;
}

template<typename T>
int QueueTp<T>::queuecount() const
{
    return items;
}

// Add item to queue
template<typename T>
bool QueueTp<T>::enqueue(const T & item)
{
    if (isfull())
        return false;
    Node * add = new Node;  // create node
// on failure, new throws std::bad_alloc exception
    add->item = item;       // set node pointers
    add->next = NULL;       // or nullptr;
    items++;
    if (front == NULL)      // if queue is empty,
        front = add;        // place item at front
    else
        rear->next = add;   // else place at rear
    rear = add;             // have rear point to new node
    return true;
}

// Place front item into item variable and remove from queue
template<typename T>
bool QueueTp<T>::dequeue(T & item)
{
    if (front == NULL)
        return false;
    item = front->item;     // set item to first item in queue
    items--;
    Node * temp = front;    // save location of first item
    front = front->next;    // reset front to next item
    delete temp;            // delete former first item
    if (items == 0)
        rear = NULL;
    return true;
}

// customer method

// when is the time at which the customer arrives
// the arrival time is set to when and the processing
// time set to a random value in the range 1 - 3

#endif

