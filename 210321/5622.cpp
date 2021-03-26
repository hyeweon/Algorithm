#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int sum = 0;

	string::iterator iter = str.begin();
	for (; iter != str.end(); ++iter)
	{
		int k;
		if (*iter < 'S') {
			k = (*iter + 1) / 3 - 19;
		}
		else if (*iter < 'Y') {
			k = *iter / 3 - 19;
		}
		else {
			k = 10;
		}
		sum += k;
	}
	cout << sum << endl;

	return 0;
}