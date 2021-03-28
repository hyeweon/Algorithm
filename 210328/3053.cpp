#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double r; //*자료형
	cin >> r;

	cout << fixed;
	cout.precision(6);
	cout << r * r * M_PI << endl;
	cout << (r * 2)*r << endl;

	return 0;
}