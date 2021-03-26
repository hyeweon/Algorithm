#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int alphabet[26] = { 0, };

	string str;
	cin >> str;
	transform(str.begin(), str.end(), str.begin(), ::toupper);

	string::iterator iter = str.begin();
	for (; iter != str.end(); ++iter)
	{
		alphabet[*iter - 65]++;
	}

	int index = 0;
	int max = alphabet[0];
	for (int i = 1; i < 26; i++) {
		if (max < alphabet[i]) {
			index = i;
			max = alphabet[i];
		}
		else if (max == alphabet[i])
			index = -1;
	}

	if (index == -1)
		cout << '?' << endl;
	else {
		char Max = index + 'A';
		cout << Max << endl;
	}

	return 0;
}