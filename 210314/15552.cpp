#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);

	int T;
	cin >> T;
	int*Sum = new int[T];

	for (int i = 0; i < T; i++) {
		int A, B;
		cin >> A >> B;
		Sum[i] = A + B;
	}

	for (int i = 0; i < T; i++) {
		cout << Sum[i] << '\n';
	}

	delete[] Sum;
	return 0;
}