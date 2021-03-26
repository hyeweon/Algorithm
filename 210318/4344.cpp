#include <iostream>
using namespace std;

int main()
{
	int C;
	cin >> C;
	for (int i = 0; i < C; i++) {
		int N;
		cin >> N;

		int *score = new int[N];
		float avg = 0;
		for (int j = 0; j < N; j++) {
			cin >> score[j];
			avg += score[j];
		}
		avg = avg / N;

		int count = 0;
		for (int j = 0; j < N; j++) {
			if (score[j] > avg)
				count++;
		}

		float per = count / (float)N * 100;
		cout << fixed;
		cout.precision(3);
		cout << per << '%' << endl;
	}

	return 0;
}