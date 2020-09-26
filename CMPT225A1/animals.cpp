#include "animals.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
/***Animal***/
string Animal::noise() {
	return "grunt"; //Just going by the example
}
int Animal::repeats() {
	return 3; //Just going by the example
}
int Animal::ageInMonths() {
	return 400000; //Yes, very old
}
void Animal::print() {
	cout << ageInMonths() << ", ";
//counter for animal noises
for (int i = 0; i < repeats(); i++) {
	cout << noise() << " ";
	}
	cout << endl;
}

/***Owl***/
//Constructors
Owl::Owl() : Owl (0) {};
Owl::Owl(int ageInMonths) {
	ageInMonthsVar = ageInMonths;
};
//Functions
string Owl::noise() {
	return owlNoise;
}
int Owl::repeats() {
	return numberOfRepeats;
}
int Owl::ageInMonths() {
	return ageInMonthsVar;
}


//***Dolphins***
//Constructors
Dolphin::Dolphin() :Dolphin(0) {};
Dolphin::Dolphin(int ageInMonths) {
	ageInMonthsVar = ageInMonths;
}
//Functions
string Dolphin::noise() {
	return dolphinNoise;
}
int Dolphin::repeats() {
	return numberOfRepeats;
}
int Dolphin::ageInMonths() {
	return ageInMonthsVar;
}


/***SFURaccoon***/
//Constructors
SFURaccoon::SFURaccoon() :SFURaccoon(0) {};
SFURaccoon::SFURaccoon(int ageInMonths) {
	ageInMonthsVar = ageInMonths;
}
//Functions
string SFURaccoon::noise() {
	return sfuRaccoonNoise;
}
int SFURaccoon::repeats() {
	return numberOfRepeats;
}
int SFURaccoon::ageInMonths() {
	return ageInMonthsVar;
}


/***Toad***/
//Constructors
Toad::Toad() :Toad(0) {};
Toad::Toad(int ageInMonths) {
	ageInMonthsVar = ageInMonths;
}
//Functions
string Toad::noise() {
	return toadNoise;
}
int Toad::repeats() {
	return numberOfRepeats;
}
int Toad::ageInMonths() {
	return ageInMonthsVar;
}