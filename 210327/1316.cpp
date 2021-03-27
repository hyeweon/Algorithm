#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int count = N;
	string word;

	for (int i = 0; i < N; i++) {
		cin >> word;
		int alphabet[26] = { 0, };
		for (int i = 0; i < word.size(); i++) {
			int index = word[i] - 97;
			if ((alphabet[index] != 0) && (i - alphabet[index] > 0)) {
				count--;
				break;
			}
			else
				alphabet[index] = i + 1;
		}
	}

	cout << count << endl;

	return 0;
}