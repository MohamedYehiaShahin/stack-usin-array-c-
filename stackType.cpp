#include "stackType.h"
template<class Type>
void stackType<Type>::initializeStack()
{
	stackTop = 0;
}//end initializeStack()

template<class Type>
bool stackType<Type>::isEmptyStack() const
{
	return (stackTop == 0);
}// end isEmptyStack

template<class Type>
bool stackType<Type>::isFullStack() const
{
	return (stackTop == maxStackSize);
}//end isFullStack

template<class Type>
void stackType<Type>::Push(const Type& newItem)
{
	if (!isFullStack())
	{
		list[stackTop] = newItem;
		++stackTop;
	}
	else
	{
		cout << " -->> cannot add elements in full stack ." << endl;
	}
}//end push

template<class Type>
Type stackType<Type>::top() const
{
	assert(stackTop != 0);   
	//insure that stack is not empty if true , then continue
	//else terminate the program
	return list[stackTop-1];
	// return the top element of this stack
}//end top()

template<class Type>
void stackType<Type>::pop()
{
	if (!isEmptyStack())
	{
		--stackTop;
	}
	else
	{
		cout << "Cannot remove elements any more because the stack is empty ." << endl;
	}
}//end pop()

template<class Type>
stackType<Type>::stackType(int stackSize):stackTop(0)
{
	if (stackSize <= 0)
	{
		cout << "size of the array that holds stack items must "
			<< " be Positive .\ncreating an array of size 100." << endl;
		maxStackSize = 100;
	}
		
	else
		maxStackSize = stackSize;

	list = new Type[maxStackSize];
}//end constructor

template<class Type>
stackType<Type>::~stackType()
{
	delete[] list;
} //end destructor

template<class Type>
stackType<Type>::stackType(const stackType<Type>& otherStack)
{
	list = NULL;
	copyStack(otherStack);
}//end copy constructor

template<class Type>
const stackType<Type>& stackType<Type>::operator=(const stackType<Type>& otherStack)

{
	if (this != &otherStack)
	{
		copyStack(otherStack);
	}
	return *this;
}

template<class Type>
void stackType<Type>::copyStack(const stackType<Type>& otherStack) 
{
	delete[] list;
	stackTop = otherStack.stackTop;
	maxStackSize = otherStack.maxStackSize;
	list = new Type[maxStackSize];

	// copy the elements of the otherstack to this stack
	for (int i = 0; i < stackTop; i++)
	{
		list[i] = otherStack.list[i];
	}
}//end copyStack()




