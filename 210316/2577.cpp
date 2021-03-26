#include <iostream>
#include <set>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	int mul = A * B * C;

	int N[10] = { 0, };
	while (mul > 0) {
		int index = mul % 10;
		N[index]++;
		mul = mul / 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << N[i] << endl;
	}

	return 0;
}