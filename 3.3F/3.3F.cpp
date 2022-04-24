// 3.3F.cpp 
#include <iostream>

#include "Angle.h"
#include "Triangle.h"
#include "Triangle1.h"

using namespace std;

int main()
{
	Triangle a(3, 3, 3);
	cout << a;
	cin >> a;
	cout << a;
	a.Type();
	cout << "P = " << a.P() << endl;
	cout << "S = " << a.S() << endl;

	Triangle1 b(3, 3, 3);
	cout << b;
	cin >> b;
	cout << b;
	b.Type();
	cout << "P = " << b.P() << endl;
	cout << "S = " << b.S() << endl;
}

