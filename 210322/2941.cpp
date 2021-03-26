#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int count = 0;

	string::iterator iter = str.begin()+1;
	for (; iter != str.end(); ++iter)
	{
		if (*iter == '=') {
			if ((*(iter - 1) == 'c') || (*(iter - 1) == 's'))
				count++;
			else if (*(iter - 1) == 'z') {
				count++;
				if (*(iter - 2) == 'd')
					count++;
			}
		}
		else if (*iter == '-') {
			if ((*(iter - 1) == 'c') || (*(iter - 1) == 'd'))
				count++;
		}
		else if (*iter == 'j') {
			if ((*(iter - 1) == 'l') || (*(iter - 1) == 'n'))
				count++;
		}
	}

	cout << str.size() - count << endl;

	return 0;
}