//Triangle.h
#pragma once
#include <iostream>
#include "Angle.h"
using namespace std;
class Triangle : public Angle
{
private:
	Angle a, b, c;
	double A, B, C;
public:
	Triangle();
	Triangle(double, double, double);

	void setA(double x) { A = x; }
	void setB(double x) { B = x; }
	void setC(double x) { C = x; }
	double getA() { return A; }
	double getB() { return B; }
	double getC() { return C; }

	void D();
	double P();
	double S();
	void H();
	int Type();

	friend ostream& operator << (ostream& out, Triangle& m);
	friend istream& operator >> (istream& in, Triangle& m);
};