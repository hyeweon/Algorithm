#include <iostream>
using namespace std;

int d(int N) {
	int dN = N;
	while (N > 0) {
		dN += N % 10;
		N = N / 10;
	}
	return dN;
}

int main()
{
	bool IsNotSelfNum[10001] = { false };
	for (int i = 0; i <= 10000; i++) {
		if (d(i) <= 10000)
			IsNotSelfNum[d(i)] = true;
	}
	
	for (int i = 0; i <= 10000; i++) {
		if (IsNotSelfNum[i] == false)
			cout << i << endl;
	}
}