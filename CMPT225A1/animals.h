#ifndef ANIMALS_H
#define ANIMALS_H
#include <string>
#include <iostream>
using namespace std;
class Animal {
public:
	//Function declarations
	virtual string noise();
	virtual int repeats();
	virtual int ageInMonths();
	void print();
	//Destructor
	~Animal() {
		cout << "Animal Destructor has been called\n";
	}
};
class Owl : public Animal {
private:
	//Variables
	string owlNoise = "Who?"; //Yes, I just made a pun
	int numberOfRepeats = 5; //Who let the dogs out (please tell me you get it)
	int ageInMonthsVar;
public:
	//Constructors
	Owl();
	Owl(int ageInMonths);
	//Destructor
	~Owl() {
		cout << "Owl Destructor has been called\n";
	}
	//Function Declarations
	string noise();
	int repeats();
	int ageInMonths();
};
class Dolphin : public Animal {
private:
	//Variables
	string dolphinNoise = "dolphinNoise.mp3"; //I can't sound it out :(
	int numberOfRepeats = 3;
	int ageInMonthsVar;
public:
	//Constructors
	Dolphin();
	Dolphin(int ageInMonths);
	//Destructor
	~Dolphin() {
		cout << "Dolphin Destructor has been called\n";
	}
	//Function Declarations
	string noise();
	int repeats();
	int ageInMonths();
};
class SFURaccoon : public Animal {
private:
	//Variables
	string sfuRaccoonNoise = "SFUConstructionIsDisturbingMySleep"; //disturbing my sleep too, even remotely
	int numberOfRepeats = 2;
	int ageInMonthsVar;
public:
	//Constructors
	SFURaccoon();
	SFURaccoon(int ageInMonths);
	//Destructor
	~SFURaccoon() {
		cout << "SFURaccoon Destructor has been called\n";
	}
	//Function Declarations
	string noise();
	int repeats();
	int ageInMonths();
};
class Toad : public Animal {
private:
	//Variables
	string toadNoise = "It's_Wednesday_My_Dudes";
	int numberOfRepeats = 3;
	int ageInMonthsVar;
public:
	//Constructors
	Toad();
	Toad(int ageInMonths);
	//Destructor
	~Toad() {
		cout << "Toad Destructor has been called\n";
	}
	//Function Declarations
	string noise();
	int repeats();
	int ageInMonths();
};
#endif