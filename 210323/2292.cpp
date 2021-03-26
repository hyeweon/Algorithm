#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	N--;

	int adr = 1;
	for (int i=6;N>0; i += 6) {
		N -= i;
		adr++;
	}

	cout << adr << endl;
	
	return 0;
}