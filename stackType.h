#pragma once
#ifndef H_StackType
#define H_StackType

#include "stackADT.h"
#include <cassert>
#endif
template<class Type>
class stackType :
    public stackADT<Type>
{
public:
   const stackType<Type>& operator=(const stackType<Type>&);
   //overload the assingment operator to hold other stack items onto this stack
	void initializeStack();
    // initialize this stack to its empty state
    // postcondition: stackTop = 0;
    bool isEmptyStack() const;
    // function to determine whether this stack is empty or not
    //postcondition : return true if this stack is empty
	bool isFullStack() const;
    // function to determine whether this stack is full or not
    //postcondition : return true if this stack is full
    void Push(const Type& newItem);
    //function to add new element to this stack
    // precondition : stack exists and  not full
    //postcondition : insert the new element to the top of the stack and stack changed
    Type top() const ;
    //function to return the top element
    // precondition: stack exists and not empty
    // postcondition : if the stack is empty the program terminates
    // else return the top element

    void pop();
    // function to remove the top element
    // precondition : stack exists and not empty
    //postcondition: stack changed and the top element is removed

    stackType(int stackSize);
    //constructor
    //create an arry of size StackSize to hold stack elements
    //the default stack size = 100;
    //postcondition: the list variable contains the base address of the array
    // stackTop = 0 , maxStackSize = stackSize

    ~stackType();
    //deallocate the memory occcupied by the arry

    stackType(const stackType<Type>& otherStack);
    //copy constructor
    // copy otherStack elements into this stack array
private:
    int stackTop; // to point to the top element
    int maxStackSize;  // to hold the array size 
    Type* list;    // to allocate an array in memory to hold stack elements

    void copyStack(const stackType<Type>& otherStack);
    // function to make a copy of otherStack
    // postcondition: a copy of other stack is created and assigned to this stack
    
};



