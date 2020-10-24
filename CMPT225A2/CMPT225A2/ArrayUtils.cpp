#include "arrayutils.h"
#include "stack.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

template<typename T>
static void ArrayUtils<T>::reverse(T* givenArray, int size) {
	Stack<T> newArrayStack(size);
	//Can't pop elements from array using the stack functions
	//Would have to make a stack and put each element of the 
	//givenArray to the stack, then pop it out which is redundant
	//Therefore, we will only use the push function
	
	for (int i = 0; i < size; i++) {
		newArrayStack.push(givenArray[size - i - 1]);
	}
	for (int j = 0; j < size; j++) {
		givenArray[j] = **(newArrayStack + j);
	}
}