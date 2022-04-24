//Triangle1.cpp
#include "Triangle1.h"
#include <cmath>
#include <iostream>
using namespace std;

Triangle1::Triangle1()
{
	setA(3);
	setB(3);
	setC(3);
	a.setG(60);
	b.setG(60);
	c.setG(60);
}

Triangle1::Triangle1(double x, double y, double z)
{
	setA(x);
	setB(y);
	setC(z);
	a.setG(acos((z * z + y * y - x * x) * 1.0 / (2 * z * y)) * 180 / 3.141592);
	b.setG(acos((x * x + z * z - y * y) * 1.0 / (2 * x * z)) * 180 / 3.141592);
	c.setG(acos((y * y + x * x - z * z) * 1.0 / (2 * x * y)) * 180 / 3.141592);
}


double Triangle1::P()
{
	return A + B + C;
}

double Triangle1::S()
{
	return 0.5 * A * B * c.Sin();
}

void Triangle1::H()
{
	cout << "H(a)" << B * c.Sin() << endl;
	cout << "H(b)" << A * c.Sin() << endl;
	cout << "H(c)" << A * b.Sin() << endl;
}

int Triangle1::Type()
{
	if (A == B && B == C) { cout << "Equilateral triangle" << endl; return 0; }
	if (A == B || B == C || A == C) { cout << "Isosceles triangle" << endl; return 0; }
	if (a.getG() == 90 || b.getG() == 90 || c.getG() == 90) { cout << "Right triangle" << endl; return 0; }
}

istream& operator >>(istream& in, Triangle1& m)
{
	int x, y, z, k;
	do {
		cout << "A = ?"; in >> x;
		cout << "B = ?"; in >> y;
		cout << "C = ?"; in >> z;
		if (x >= y && x >= z) { k = x; }
		if (x <= y && y >= z) { k = y; }
		if (z >= y && x <= z) { k = z; }
	} while (2 * k - x - y - z > 0);
	m.setA(x);
	m.setB(y);
	m.setC(z);
	m.a.setG(acos((z * z + y * y - x * x) * 1.0 / (2 * z * y)) * 180 / 3.141592);
	m.b.setG(acos((x * x + z * z - y * y) * 1.0 / (2 * x * z)) * 180 / 3.141592);
	m.c.setG(acos((y * y + x * x - z * z) * 1.0 / (2 * x * y)) * 180 / 3.141592);
	return in;
}

ostream& operator <<(ostream& out, Triangle1& m)
{
	out << "A = " << m.A << endl;
	out << "B = " << m.B << endl;
	out << "C = " << m.C << endl;
	out << "a = " << m.a.getG() << endl;
	out << "b = " << m.b.getG() << endl;
	out << "c = " << m.c.getG() << endl;
	return out;
}
