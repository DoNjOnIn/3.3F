//Triangle1.h
#pragma once
#include <iostream>
#include "Angle.h"
using namespace std;
class Triangle1 :
    private Angle
{
private:
	Angle a, b, c;
	double A, B, C;
public:
	Triangle1();
	Triangle1(double, double, double);

	void setA(double x) { A = x; }
	void setB(double x) { B = x; }
	void setC(double x) { C = x; }
	double getA() { return A; }
	double getB() { return B; }
	double getC() { return C; }

	double P();
	double S();
	void H();
	int Type();

	friend ostream& operator << (ostream& out, Triangle1& m);
	friend istream& operator >> (istream& in, Triangle1& m);

};

