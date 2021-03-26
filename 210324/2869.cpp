#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int A, B, V;
	scanf_s("%d %d %d", &A, &B, &V);
	//scanf("%d %d %d", &A, &B, &V);

	int day = ((V - B - 1) / (A - B)) + 1;

	printf("%d", day);
	
	return 0;
}