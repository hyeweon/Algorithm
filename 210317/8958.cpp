#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		string ans;
		cin >> ans;

		int point = 1;
		int score = 0;

		string::iterator iter = ans.begin();
		for (; iter != ans.end(); ++iter)
		{
			if (*iter == 'O') {
				score += point;
				point++;
			}
			else if (*iter == 'X') {
				point = 1;
			}
		}

		cout << score << endl;
	}
}