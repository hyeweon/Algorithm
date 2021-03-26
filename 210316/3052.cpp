#include <iostream>
using namespace std;

int main()
{
	int N[10];
	int count=10;

	for (int i = 0; i < 10; i++) {
		int input;
		cin >> input;
		N[i] = input % 42;

		for (int j = 0; j < i; j++) {
			if (N[j] == N[i]) {
				count--;
				break;
			}
		}
	}

	cout << count << endl;

	return 0;
}