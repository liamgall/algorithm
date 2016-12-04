#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, Q;
	string str;
	cin >> N;
	vector <string> arr(N);
	for (int i = 0; i < N; ++i) {
		cin >> arr[i];
	}
	cin >> Q;
	for (int i = 0; i < Q; ++i) {
		int ans = 0;
		cin >> str;
		for (int j = 0; j < N; ++j) {
			if (!str.compare(arr[j]))
				++ans;
		}
		cout << ans << endl;
	}
	return 0;
}
