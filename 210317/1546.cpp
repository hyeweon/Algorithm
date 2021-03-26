#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int *score = new int[N];

	int M = 0;
	for (int i = 0; i < N; i++) {
		cin >> score[i];
		if (M < score[i])
			M = score[i];
	}

	float avg = 0;
	for (int i = 0; i < N; i++) {
		avg += (score[i] / (float)M * 100);
	}

	cout << avg / N << endl;

	delete[] score;
	return 0;
}