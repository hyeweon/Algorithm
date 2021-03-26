#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int M = N;
	int cycle = 0;

	while (true) {
		M = (M % 10) * 10 + ((M / 10) + (M % 10)) % 10;
		cycle++;

		if (M == N)
			break;
	}

	cout << cycle;

	return 0;
}