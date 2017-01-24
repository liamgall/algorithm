#include <cmath>
#include <cstdio>

#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int checkStr(char* str) {
	int length = strlen(str);
	for (int i = 1; i < length; ++i) {
		if (abs(str[i] - str[i - 1]) != abs(str[length - i] - str[length - i - 1])) {
			return 1;
		}
	}
	return 0;
}

int main(void) {
	char str[10001];
	int testCase;
	cin >> testCase;
	while (testCase--) {
		memset(str, 0, sizeof(str));
		cin >> str;

		if (checkStr(str) == 0) {
			cout << "Funny" << endl;
		}
		else {
			cout << "Not Funny" << endl;
		}
	}
	return 0;
}
