#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int *num = new int[N];
	bool prime = true;
	int count = N;

	for (int i = 0; i < N; i++) {
		cin >> num[i];

		if (num[i] == 1) {
			prime = false;
		}

		for (int j = 2; j < num[i]; j++) {
			if (num[i] % j == 0) {
				prime = false;
				break;
			}
		}

		if (prime == false)
			count--;
		prime = true;
	}

	cout << count << endl;

	return 0;
}