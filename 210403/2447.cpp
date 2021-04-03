#include <iostream>
#include <string>
using namespace std;

string *stars(int N) {
	string *lines = new string[N];

	if (N == 3) {
		lines[0] = "***";
		lines[1] = "* *";
		lines[2] = "***";
	}
	else {
		int pre = N / 3;
		string *lines_ = stars(pre);

		string blanks = " ";
		for (int i = 1; i < N / 3; i++) {
			blanks = blanks + ' ';
		}

		for (int i = 0; i < N; i++) {
			if (i >= pre && i < pre * 2)
				lines[i] = lines_[i % pre] + blanks + lines_[i % pre];
			else
				lines[i] = lines_[i % pre] + lines_[i % pre] + lines_[i % pre];
		}
	}

	return lines;
}

int main()
{
	int N;
	cin >> N;
	string *lines = stars(N);

	for (int i = 0; i < N; i++) {
		cout << lines[i] << endl;
	}

	return 0;
}