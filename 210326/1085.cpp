#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int x, y, w, h, m;
	cin >> x >> y >> w >> h;

	m = min(min(x, y), min(w - x, h - y));
	cout << m;
	
	return 0;
}