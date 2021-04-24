#include <iostream>
using namespace std;

int main()
{
    int n[9];
    for (int i = 0; i < 9; i++) {
        cin >> n[i];
    }

    int max = n[0];
    int index = 0;
    for (int i = 1; i < 9; i++) {
        if (max < n[i]) {
            max = n[i];
            index = i;
        }
    }
    cout << max << endl;
    cout << index + 1 << endl;

    return 0;
}