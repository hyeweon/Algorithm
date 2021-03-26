#include <iostream>
using namespace std;

struct PK {
	int P;
	int K;
	int count1;
	int count2;
};

int main()
{
	int L;
	cin >> L;
	int N;
	cin >> N;

	PK* pk;
	pk = new PK[N];
	for (int i = 0; i < N; i++) {
		cin >> pk[i].P >> pk[i].K;
		pk[i].count1 = (pk[i].K - pk[i].P);
		pk[i].count2 = 0;
	}

	int* cake;
	cake = new int[L];
	for (int i = 0; i < L; i++) {
		cake[i] = 0;
	}
	for (int i = 0; i < N; i++) {
		for (int j = (pk[i].P - 1); j < pk[i].K; j++) {
			if (cake[j] == 0) {
				cake[j] = i + 1;
				pk[i].count2++;
			}
		}
	}
	
	int max = 0;
	for (int i = 1; i < N; i++) {
		if (pk[max].count1 < pk[i].count1)
			max = i;
	}
	cout << (max + 1) << endl;

	max = 0;
	for (int i = 1; i < N; i++) {
		if (pk[max].count2 < pk[i].count2)
			max = i;
	}
	cout << (max + 1) << endl;

	return 0;
}