#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	char input[1000000];
	fgets(input, 1000000, stdin);

	int count = 0;
	for (int i = 1; i < 1000000; i++) {
		if (input[i + 2] == NULL)
			break;
		else if (input[i] == ' ')
			count++;
	}

	if ((strlen(input) == 2) && (input[0] == ' '))
		count = -1;

	cout << count + 1 << endl;

	return 0;
}