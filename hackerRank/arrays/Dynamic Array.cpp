#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int N, Q;
	int temp;
	int query;
	int x = 0, y = 0;
	int lastans = 0;
	cin >> N >> Q;
	vector < vector<int>> arr(N);
	for (int i = 0; i < Q; ++i) {
		cin >> query >> x >> y;
		switch (query) {
		case 1:
			temp = (x^lastans) % N;
			arr[temp].push_back(y);
			break;
		case 2:
			temp = (x^lastans) % N;
			lastans = arr[temp][y % arr[temp].size()];
			cout << lastans << endl;
			break;
		default:
			break;
		}
	}
	return 0;
}
