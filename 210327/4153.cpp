#include <iostream>
using namespace std;

int main()
{
	int x, y, z;
	while (true) {
		cin >> x >> y >> z;
		if (x == 0)
			break;

		if (x > y && x > z) {
			if (x * x == y * y + z * z)
				cout << "right";
			else
				cout << "wrong";
		}
		else if (z > y) {
			if (z * z == x * x + y * y)
				cout << "right";
			else
				cout << "wrong";
		}
		else {
			if (y * y == x * x + z * z)
				cout << "right";
			else
				cout << "wrong";
		}

		cout << endl;
	}

	return 0;
}