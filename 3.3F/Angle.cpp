//Angle.cpp
#include "Angle.h"
#include <iostream>


using namespace std;


Angle::Angle()
{
	setG(60);
}

Angle::Angle(int a)
{
	setG(a / 60.0);
}

Angle::Angle(double a)
{
	setG(a);
}

double Angle::Sin()
{
	return sin(getG() * 3.141592653589793 / 180);
}

Angle& Angle::operator==(Angle& a)
{

	if (this->grades < a.grades) { cout << "1<2" << endl; }
	if (this->grades > a.grades) { cout << "1>2" << endl; }
	if (this->grades == a.grades) { cout << "1=2" << endl; }
	return a;
}

void Angle::ChangeAngle(double d)
{
	setG(getG() + d);
	setM(getM() + d * 60);
	cout << "G = " << getG() << "     M = " << getM() << endl;
}
