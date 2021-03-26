#include <iostream>
using namespace std;

bool IsHan(int n) {
	if (n == 1000)
		return false;
	else {
		int x, y, z;
		x = n % 10;
		y = (n / 10) % 10;
		z = ((n / 10) / 10);
		if ((x - y) == (y - z))
			return true;
		else
			return false;
	}
}

int main()
{
	int N, count;
	cin >> N;
	if (N < 100)
		count = N;
	else {
		count = 99;
		for (int i = 100; i <= N; i++) {
			if (IsHan(i) == true)
				count++;
		}
	}
	cout << count << endl;

	return 0;
}
