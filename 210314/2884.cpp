﻿#include <iostream>
using namespace std;

int main() {
	int H, M;
	cin >> H >> M;

	if (M < 45) {
		if (H > 0) {
			H = H - 1;
		}
		else {
			H = 23;
		}
		M = M + 15;
	}
	else {
		M = M - 45;
	}

	cout << H << ' ' << M;

	return 0;
}