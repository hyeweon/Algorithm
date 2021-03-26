#include <iostream>
#include <string>
using namespace std;

int main()
{
	string A, B;
	cin >> A >> B;

	if (A[2] == B[2]) {
		if (A[1] == B[1]) {
			if (A[0] > B[0]) {
				for (int i = 2; i >= 0; i--) {
					cout << A[i];
				}
			}
			else {
				for (int i = 2; i >= 0; i--) {
					cout << B[i];
				}
			}
		}
		else if (A[1] > B[1]) {
			for (int i = 2; i >= 0; i--) {
				cout << A[i];
			}
		}
		else {
			for (int i = 2; i >= 0; i--) {
				cout << B[i];
			}
		}
	}
	else if (A[2] > B[2]) {
		for (int i = 2; i >= 0; i--) {
			cout << A[i];
		}
	}
	else {
		for (int i = 2; i >= 0; i--) {
			cout << B[i];
		}
	}
	
	return 0;
}