#ifndef DICE_H_
#define DICE_H_
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class Dice {
public:
	int sides;

	Dice(int Sides) {
		Dice(6);
		srand(time(NULL));
		sides = rand() % 6;
		
	}
	int Roll() {
		if (sides = 1 || sides <= 6)
		return sides;

	}
	int GetRolls() {

		return 0;
	}
	int GetSides() {

		return 0;
	}


}; 
#endif
