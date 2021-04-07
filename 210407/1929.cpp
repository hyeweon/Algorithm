#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int M, N;
	cin >> M >> N;
	bool *prime = new bool[N - M + 1];
	prime = { ,true };

	for (int i = 2; i <= (N - M); i++) {
		if (prime[i] == )
			continue;
		else
			for (int j = i + i; j <= (N - M); j += i) {
				num[j] = 0;
			}
	}

	return 0;
}