#ifndef ARRAYLIST_H
#define ARRAYLIST_H
#include <string>
#include <iostream>
using namespace std;
template <typename T>
class ArrayList {
public:
	class Iterator {
	public:
		using PointerType = T *;
		using ReferenceType = T &;
	private:
		PointerType itrPTR;
		int index = 0;
	public:
		//Constructor
		Iterator(PointerType ptr)
			: itrPTR(ptr) {}
		//Increment operators
		Iterator& operator++() {
			if (itrPTR == privateArray[capacity - 1]) {//Makes a circular array
				itrPTR = privateArray[0]; //incremented back to 0
				index = 0;
			}
			else {
				itrPTR++;
				index++;
			}
			return *this;
		}
		//Decrement operators
		Iterator& operator--() {
			if (itrPTR == privateArray[0]) {//Makes a circular array
				itrPTR = privateArray[(capacity - 1)]; //decremented back to capacity - 1
				index = capacity - 1;
			}
			else {
				itrPTR--;
				index--;
			}
			return *this;
		}
		//Indexing operator
		ReferenceType operator[](unsigned int index) {
			unsigned int modifiedIndex = index % capacity;
			this->index += modifiedIndex;
			return *(itrPTR + modifiedIndex);
		}
		//Arrow operator returns current position
		PointerType operator->() {
			return itrPTR;
		}
		//Dereference operator
		ReferenceType operator*() {
			return *itrPTR;
		}
		//Comparison operators
		bool operator==(const Iterator& i) const {
			return (itrPTR == i.itrPTR);
		}
		bool operator!=(const Iterator& i) const {
			return !(itrPTR == i.itrPTR);
		}
		//Getting Index function
		int getIndex() {
			return index;
		}
	};
private:
	int capacity;
	//Lets array dynamically initialize the array size
	T *privateArray = new T[capacity];
	//Initialize all elements to NULL (easier to detect if the space is free)
	privateArray = { NULL };
	Iterator frontITR = privateArray[0];
	Iterator backITR = privateArray[capacity - 1];
public:
	T& operator[](int i);
	T& front();
	T& back();
	void insertFront(T& e);
	void insertBack(T& e);
	void insert(Iterator p, T& e);
	void removeFront();
	void removeBack();
	void remove(Iterator p);
	int size();
	bool empty();
	
	Iterator begin();
	Iterator end();
	//Constructor
	ArrayList() : ArrayList(4) {}; //Defaulted to 4
	ArrayList(int capacity) {
		this->capacity = capacity;
	};
	//Destructor
	~ArrayList() {
		cout << "ArrayList has been destroyed\n";
	}
};

class EmptyListException {
private:
	string errorMsg;
public:
	EmptyListException(const string& err) {
		errorMsg = err;
	}
	string getMessage() const {
		return errorMsg;
	}
};

class InvalidIteratorException {
private:
	string errorMsg;
public:
	InvalidIteratorException(const string& err) {
		errorMsg = err;
	}
	string getMessage() const {
		return errorMsg;
	}
};

#endif