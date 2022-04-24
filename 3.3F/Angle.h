//Angle.h
#pragma once
#include <iostream>


class Angle
{
private:
	double grades;
	int minutes;
public:
	Angle();
	Angle(int);
	Angle(double);

	void setG(double g) { grades = g; setM(g * 60.0); };
	void setM(int m) { minutes = m; };
	double getG() { return grades; };
	int getM() { return minutes; };

	double Sin();
	void ChangeAngle(double d);

	Angle& operator ==(Angle& a);
};

