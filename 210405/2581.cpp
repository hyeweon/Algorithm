#include <iostream>
using namespace std;

int main()
{
	int M, N;
	cin >> M >> N;

	bool prime = true;
	int sum = 0;
	int min = -1;

	for (int i = M; i <= N; i++) {
		if (i == 1) {
			prime = false;
		}

		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				prime = false;
				break;
			}
		}

		if (prime == true) {
			if (min == -1)
				min = i;
			sum += i;
		}
		prime = true;
	}

	if (sum == 0)
		cout << min << endl;
	else
		cout << sum << '\n' << min << endl;

	return 0;
}