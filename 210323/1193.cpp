#include <iostream>
using namespace std;

int main()
{
	int X;
	cin >> X;

	int n = 0;
	for (int i = 1; X > 0; i += 1) {
		X -= i;
		n++;
	}

	if (n % 2 == 0) {
		cout << n + X << '/' << 1 - X << endl;
	}
	else {
		cout << 1 - X << '/' << n + X << endl;
	}

	return 0;
}