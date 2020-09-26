# CMPT-225
CMPT225A1 is the folder for the first assignment of my CMPT225 course
In CMPT225A1
-Establishment of an Animal class where four other animal children classes extends Animal and inherits a couple universal functions
such as: 
  -string noise() to return a string of the noise the animal makes
  -int repeats() to return an int of the number of times the animal likes to repeat its noise
  -int ageInMonths() to return an int of the number of months this animal has been alive
  -void print() to print out the age in months, and the noise the animal makes repeats() times
-Utilizes polymorphism to convert the virtual functions stated above into each of the animal subclasses own noises, age, etc.
-Creates an array in the main.cpp of animal type, to contain each class and subclass
-Uses the principle of Encapsulation to hide private variables of the respective subclasses
-Uses constructors for each subclass that will initialize the age in months of every animal, if nothing is inputted, a default constructor will initialize to 0.
-Deletes each class type and frees the memory in the array at the end of main.cpp through a destructor in every class
