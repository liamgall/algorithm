#include <iostream>
using namespace std;

int main() {
    int n, q, k, s, index;
	int** arr;
	cin >> n >> q;
	arr = (int**)malloc(sizeof(int*)*n);
	for (int i = 0; i < n; ++i) {
		cin >> k;
		arr[i] = (int*)malloc(sizeof(int)*k);
		for (int j = 0; j < k; ++j) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < q; ++i) {
		cin >> s >> index;
		cout << arr[s][index] << endl;
	}
	return 0;
}
