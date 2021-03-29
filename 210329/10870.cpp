#include <iostream>
using namespace std;

int fibonacci(int x) {
	if (x < 2)
		return x;
	else
		return fibonacci(x - 1) + fibonacci(x - 2);
}

int main()
{
	int n;
	cin >> n;

	cout << fibonacci(n) << endl;

	return 0;
}