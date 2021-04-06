#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	bool self = true;

	for (; N > 1; self = true) {
		for (int i = 2; i < N; i++) {
			if (N%i == 0) {
				N = N / i;
				self = false;
				cout << i << endl;
				break;
			}
		}
		if (self == true) {
			cout << N << endl;
			break;
		}
	}

	return 0;
}