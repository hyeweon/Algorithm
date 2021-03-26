#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int kg5 = N / 5;
	int kg3 = N % 5;
	if (kg3 == 4) {
		kg5--;
		kg3 = 3;
	}
	else if (kg3 == 3) {
		kg3 = 1;
	}
	else if (kg3 == 2) {
		kg5 -= 2;
		kg3 = 4;
	}
	else if (kg3 == 1) {
		kg5--;
		kg3 = 2;
	}

	if (kg5 < 0)
		cout << -1 << endl;
	else
		cout << kg5 + kg3 << endl;
	
	return 0;
}