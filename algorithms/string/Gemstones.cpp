#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void checkRocks(char* str, int alphabet[]) {
	bool checked[26] = { 0, };

	while (*str) {
		if (!checked[str[0] - 97]) {
			alphabet[str[0] - 97]++;
			checked[str[0] - 97] = 1;
		}
		++str;
	}
}

int main(void) {
	int N;
	int answer = 0;
	int alphabet[26] = { 0, };
	cin >> N;

	for (int N_i = 0; N_i < N; ++N_i) {
		char str[101];
		memset(str, 0, sizeof(str));
		cin >> str;
		checkRocks(str, alphabet);
	}
	for (int i = 0; i < 26; ++i) {
		if (alphabet[i] == N)
			answer++;
	}
	cout << answer;
	return 0;
}
