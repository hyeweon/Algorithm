#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int M, N;
	cin >> M >> N;
	bool *prime = new bool[N + 1]();
	float range = sqrt(N);

	for (int i = 2; i <= range; i++) {
		if (prime[i] == 1)
			continue;
		else
			for (int j = i; j <= N; j += i) {
				prime[j] = 1;
			}
	}
	for (int i = M; i <= N; i++) {
		if (prime[i] == 0)
			cout << i << endl;
	}
	
	return 0;
}