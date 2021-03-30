#include <iostream>
using namespace std;

struct body {
	int weight;
	int height;
	int num = 1;
};

int main()
{
	int N;
	cin >> N;
	body *Body = new body[N];

	for (int i = 0; i < N; i++) {
		cin >> Body[i].weight >> Body[i].height;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if ((Body[i].weight < Body[j].weight) && (Body[i].height < Body[j].height))
				Body[i].num++;
		}
	}

	for (int i = 0; i < N; i++) {
		cout << Body[i].num << ' ';
	}

	return 0;
}