#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	
	for (int i = 0; i < T; i++) {
		double y, x;
		cin >> x >> y;

		double count = 0;
		double d = (y - x) / 2;
		double k = 1;
		//*자료형
		for (; d > k; k++) {
			d = d - k;
			count++;
		}

		count = count * 2;
		if (d > k / 2)
			count += 2;
		else if (d != 0)
			count++;

		cout << count << endl;
	}

	return 0;
}