#include <iostream>
using namespace std;

int people(int a, int b) {
	int p = 0;
	if (a == 0)
		return b;
	else {
		for (int i = 1; i <= b; i++) {
			p += people(a - 1, i);
		}
		return p;
	}
}

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int k, n;
		cin >> k >> n;
		cout << people(k, n) << endl;
	}

	return 0;
}