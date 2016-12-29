#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	string str;
	int alphabets[26] = { 0, };
	getline(cin,str);
	for (int i = 0; i < str.length(); ++i) {
		if (str[i]- 97< 0)
			alphabets[str[i] + 32-97]++;
		else
			alphabets[str[i]-97]++;
	}
	for (int i = 0; i < 26; ++i) {
		if (!alphabets[i]) {
			cout << "not pangram";
			return 0;
		}
	}
	cout << "pangram";
	return 0;
}
