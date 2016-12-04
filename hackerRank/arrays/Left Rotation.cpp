#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n, d;
	cin >> n >> d;
	int ptr = d;
	vector <int> arr(n);
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; ++i) {
		cout << arr[ptr++%n] << " ";
	}
	return 0;
}
