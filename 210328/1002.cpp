#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		int d = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
		int r = (r1 + r2)*(r1 + r2);
		int r_ = (r1 - r2)*(r1 - r2);

		if (d == 0) {
			if (r1 == r2)
				cout << -1;
			else
				cout << 0;
		}
		else {
			if (d == r || d == r_)
				cout << 1;
			else if (d > r)
				cout << 0;
			else if (d > r_)
				cout << 2;
			else
				cout << 0;
		}
		cout << endl;
	}

	return 0;
}