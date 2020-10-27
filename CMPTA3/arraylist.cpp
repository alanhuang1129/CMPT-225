#include "arraylist.h"
#include <iostream>
#include <string>
using namespace std;

//ArrayList Functions

template<typename T>
T& ArrayList<T>::operator[](int i) {
	return privateArray[i];
}

template<typename T>
T& ArrayList<T>::front() {
	return *frontITR;
}

template<typename T>
T& ArrayList<T>::back() {
	return *backITR;
}

template<typename T>
void ArrayList<T>::insertFront(T& e) {
	//Full Check
	bool full = true;
	//Iterate through whole array
	Iterator itr(privateArray[0]);
		for (int i = 0; i < capacity; i++) {
			if (*itr == NULL)
				full = false;
			itr++;
		}
	//Double the capacity
	if (full == true) {
		int tempFront, tempBack;
		tempFront = frontITR.getIndex();
		tempBack = backITR.getIndex();
		capacity *= 2;
		T* newPrivateArray[] = new T[capacity];
		newPrivateArray = { NULL };
		for (int i = 0; i < (capacity / 2); i++) {//capacity/2 = old capacity size
			newPrivateArray[i] = privateArray[i]; //Copy elements from privateArray to newPrivateArray
		}
		delete[] privavteArray;//Delete array
		privateArray = newPrivateArray; //switch array pointer to new array pointer
		frontITR = newPrivateArray[tempFront];
		backITR = newPrivateArray[tempBack];
	}
	//Insert at front
	frontITR--;
	*frontITR = e;
}

template<typename T>
void ArrayList<T>::insertBack(T& e) {
	//Full Check
	bool full = true;
	//Iterate through whole array
	Iterator itr(privateArray[0]);
		for (int i = 0; i < capacity; i++) {
			if (*itr == NULL)
				full = false;
			itr++;
		}
	//Double the capacity
	if (full == true) {
		int tempFront, tempBack;
		tempFront = frontITR.getIndex();
		tempBack = backITR.getIndex();
		capacity *= 2;
		T* newPrivateArray[] = new T[capacity];
		newPrivateArray = { NULL };
		for (int i = 0; i < (capacity / 2); i++) {//capacity/2 = old capacity size
			newPrivateArray[i] = privateArray[i]; //Copy elements from privateArray to newPrivateArray
		}
		delete[] privavteArray;//Delete array
		privateArray = newPrivateArray; //switch array pointer to new array pointer
		frontITR = newPrivateArray[tempFront];
		backITR = newPrivateArray[tempBack];
	}
	//Insert at back
	backITR++;
	*backITR = e;
}

template<typename T>
void ArrayList<T>::insert(Iterator p, T& e) {
	//Iterator Check
	try {
		if (p.getIndex() < 0 || p.getIndex() >= capacity)
			throw InvalidIteratorException("Iterator is invalid");
	}
	catch(InvalidIteratorException(iie) {
		cout << iie.getMessage() << endl;
	}
	//Full Check
	bool full = true;
	//Iterate through whole array
	Iterator itr(privateArray[0]);
	for (int i = 0; i < capacity; i++) {
		if (*itr == NULL)
			full = false;
		itr++;
	}
	//Double the capacity
	if (full == true) { 
		int tempFront, tempBack;
		tempFront = frontITR.getIndex();
		tempBack = backITR.getIndex();
		capacity *= 2;
		T* newPrivateArray[] = new T[capacity];
		newPrivateArray = { NULL };
		for (int i = 0; i < (capacity / 2); i++) {//capacity/2 = old capacity size
			newPrivateArray[i] = privateArray[i]; //Copy elements from privateArray to newPrivateArray
		}
		delete[] privavteArray;//Delete array
		privateArray = newPrivateArray; //switch array pointer to new array pointer
		frontITR = newPrivateArray[tempFront];
		backITR = newPrivateArray[tempBack];
	}
	//Insert e before the Iterator p
	p--;
	*p = e;
}

template<typename T>
void ArrayList<T>::removeFront() {
	//Empty Check
	bool empty = true;
	try {
		//Iterate through whole array
		Iterator itr(privateArray[0]);
			for (int i = 0; i < capacity; i++) {
				if (*itr != NULL)
					empty = false;
				itr++;
			}
		if (empty == true)
			throw EmptyListException("List is Empty");
	}
	catch (EmptyListException ele) {
		cout << ele.getMessage() << endl;
	}
	//Remove if not empty
	if (empty == false) {
		*frontITR = NULL;
		frontITR++;
	}
}

template<typename T>
void ArrayList<T>::removeBack() {
	//Empty Check
	bool empty = true;
	try {
		//Iterate through whole array
		Iterator itr(privateArray[0]);
			for (int i = 0; i < capacity; i++) {
				if (*itr != NULL)
					empty = false;
				itr++;
			}
		if (empty == true)
			throw EmptyListException("List is Empty");
	}
	catch (EmptyListException ele) {
		cout << ele.getMessage() << endl;
	}
	//Remove if not empty
	if (empty == false) {
		*backITR == NULL;
		backITR--;
	}
}

template<typename T>
void ArrayList<T>::remove(Iterator p){
	//Iterator Check
	try {
		if (p.getIndex() < 0 || p.getIndex() >= capacity)
			throw InvalidIteratorException("Iterator is invalid");
	}
	catch (InvalidIteratorException(iie) {
		cout << iie.getMessage() << endl;
	}
	//Empty Check
	bool empty = true;
	try {
		//Iterate through whole array
		Iterator itr(privateArray[0]);
			for (int i = 0; i < capacity; i++) {
				if (*itr != NULL)
					empty = false;
				itr++;
			}
		if (empty == true)
			throw EmptyListException("List is Empty");
	}
	catch (EmptyListException ele) {
		cout << ele.getMessage() << endl;
	}
	//Remove if not empty
	if (empty == false) {
		*p == NULL;
	}
}

template<typename T>
int ArrayList<T>::size() {
	//Iterate through whole array
	Iterator itr(privateArray[0]);
	int count = 0;
	for (int i = 0; i < capacity; i++) {
		if (*itr != NULL)
			count++;
		itr++;
	}
	return count;
}

template<typename T>
bool ArrayList<T>::empty() {
	//Iterate through whole array
	Iterator itr(privateArray[0]);
	for (int i = 0; i < capacity; i++) {
		if (*itr != NULL)
			return false;
		itr++;
	}
	return true;
}

template<typename T>
ArrayList<T>::Iterator ArrayList<T>::begin() {
	Iterator itr(privateArray[0]);
	return itr;
}

template<typename T>
ArrayList<T>::Iterator ArrayList<T>::end() {
	Iterator itr(privateArray[capacity - 1])
	return (itr);
}
