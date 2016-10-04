//// 
// Silvia Moreno
// CS-172-1
// Exam 1 Review
// 10/4/16
////

#include <iostream>
#include "Dice.h"
using namespace std;



int main() {
	Dice d(6); // declares a dice with 6 sides
	cout << d.Roll() << endl; //outputs the value from 1 -6
	if (d.GetSides() != 6) {
		cout << "Error in GetSides(). It should return 6\n";
		return 0;
	} // roll the dice 100 times and make sure it workes every time.
	bool passed = true;
	for (int i = 0; i < 100; i++)
	{
		int x = d.Roll();
		if (x < 1 || x > 6) { // roll returned an incorrect side
			cout << "Error in Roll() method; Roll returned " << x << endl;
			passed = false;
			break;
		}
		if (passed)
			cout << "Passed roll test" << endl; // ouputs if it passed
		cout << d.GetRolls() << endl; // should output 101
	}
	return 0;
}