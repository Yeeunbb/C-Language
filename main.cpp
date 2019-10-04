/*
 * main.cpp
 *
 *  Created on: 2018. 10. 18.
 *      Author: ykoou
 */


#include <iostream>
#include "Car.h"

using namespace std;

int main()
{
	Car myCar;

	myCar.setSpeed(100);

	cout << "Current Speed: " << myCar.getSpeed() << endl;

	return 0;
}
