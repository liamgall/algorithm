#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
	string str;
	cin >> str;

	for (int i = 1; i < str.length(); ++i) {
		if (str[i] == str[i - 1]) {
			str = str.substr(0, i - 1) + str.substr(i + 1);
			i = 0;
		}
	}
	if (str.length() == 0)
		cout << "Empty String";
	else
		cout << str;
	return 0;
}
