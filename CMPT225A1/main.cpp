#include "animals.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

int main() {
	//Animal Declarations
	Animal animal;
	Owl owl(25);
	Dolphin dolphin(12);
	SFURaccoon sfuRaccoon(8);
	Toad toad(3);
	//Declaration for part 2 (Animal pointer array)
	Animal* animalArray[10];
	//printing animal information
	animal.print();
	owl.print();
	dolphin.print();
	sfuRaccoon.print();
	toad.print();

	//part 2
	cout << "\n\nPart 2\n\n"; //Just to make it easier to read
	animalArray[0] = new Animal;
	animalArray[1] = new Owl(24);
	animalArray[2] = new Dolphin(17);
	animalArray[3] = new SFURaccoon(20);
	animalArray[4] = new Toad(15);

	//Array printing
	for (int i = 0; i < 4; i++) {
		animalArray[i]->print();
	}
	//Deleting array elements and freeing space (I put a message in the destructor to make it known it was deleted)
	for (int j = 0; j < 4; j++) {
		delete animalArray[j];
	}
	return 0;
}