#pragma once
#include<iostream>
using namespace std;
template<class Type>
class stackADT
{
public:
	virtual void initializeStack() = 0;
	//function to initialize the stack to an Empty state
	//postcondition: Stack is empty
	virtual bool isEmptyStack() const = 0;
	// methode to Check whether the stack is empty or not
	// postconsdition: return true if the stack is Empty
	//else Return fales
	virtual bool isFullStack() const = 0;
	//methode to check whether the stack is Full or not
	// postcondition: return true if the stack is full else
	//return false
	virtual void Push(const Type& newItem) = 0;
	//methode to add new item onto the stack
	//precondition: stack exists and not Full
	//postcondition: stack is changed and a new element added onto the top 
	//of the stack
	virtual Type top() const = 0;
	//methode to return the top Element of the stack
	//precondition: stack exists and not Empty
	//postcondition: if stack isEmpty the Program Terminates 
	//else Return The top element of the stack
	virtual void pop() = 0;
	// methode to remove the top Element of the stack
	// precondition: stack exists and not Empty
	//postcondition: stack changed and the top Emlement is removed
};

