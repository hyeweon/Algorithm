#include <iostream>
using namespace std;

int main()
{
	int A, B, C, BEP;
	cin >> A >> B >> C;

	if (B >= C)
		BEP = -1;
	else
		BEP = A / (C - B) + 1;

	cout << BEP;
	
	return 0;
}