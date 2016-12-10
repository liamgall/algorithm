#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int N, x, a, b;
	cin >> N;
	vector<int> arr(N + 1, 0);

	for (int i = 1; i <= N; ++i) {
		cin >> arr[i];
	}
	cin >> x;
	arr.erase(arr.begin() + x);

	cin >> a >> b;
	arr.erase(arr.begin() + a , arr.begin() + b);

	cout << arr.size() - 1 << endl;
	for (int i = 1; i < arr.size(); ++i) {
		cout << arr[i] << " ";
	}
	return 0;
}
