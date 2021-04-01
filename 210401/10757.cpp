#include <iostream>
#include <string>
using namespace std;

int main()
{
	string A, B;
	cin >> A >> B;

	int Alength = A.length();
	int Blength = B.length();
	if (Alength < Blength) {
		for (int i = 0; i < (Blength - Alength); i++) {
			A = '0' + A;
		}
	}
	else if (Alength > Blength) {
		for (int i = 0; i < (Alength - Blength); i++) {
			B = '0' + B;
		}
	}

	string sum;
	char temp;
	char carry = 0;

	for (int i = (A.size() - 1); i >= 0; i--) {
		temp = A[i] + B[i] + carry - 48;
		if (temp > '9') {
			temp = temp - 10;
			carry = 1;
			sum = temp + sum;
		}
		else {
			carry = 0;
			sum = temp + sum;
		}
	}

	if (carry == 1)
		sum = '1' + sum;

	cout << sum;

	return 0;
}