#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int k;
	cin >> k;

	for (int i = 0, len = s.length(); i < len; ++i) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] = (s[i] + (k%26) > 'z') ? s[i] + (k % 26) - 26 : s[i] + k % 26;
		}
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] = (s[i] + (k%26) > 'Z') ? s[i] + (k % 26) - 26 : s[i] + k % 26;
		}
	}
	cout << s;
	return 0;
}
