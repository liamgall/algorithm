#include <cmath>
#include <cstdio>

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct pixels {
	pixels* leftTop;
	pixels* rightTop;
	pixels* leftBottom;
	pixels* rightBottom;
	char index;
};

void init(pixels* a) {
	a->leftTop = a->leftBottom = a->rightTop = a->rightBottom = NULL;
	a->index = NULL;
}

int test(pixels* a, string str, int num) {
	int length = str.length();
	for (int i = num; i < length;) {
		if (str[i] == 'w' || str[i] == 'b') {
			a->index = str[i];
			return i + 1;
		}
		else if (str[i] == 'x') {
			a->index = 'x';
			pixels* temp = new pixels;
			pixels* temp2 = new pixels;
			pixels* temp3 = new pixels;
			pixels* temp4 = new pixels;
			init(temp);
			init(temp2);
			init(temp3);
			init(temp4);
			i = test(temp, str, i + 1);
			i = test(temp2, str, i);
			i = test(temp3, str, i);
			i = test(temp4, str, i);
			a->leftTop = temp;
			a->rightTop = temp2;
			a->leftBottom = temp3;
			a->rightBottom = temp4;
			return i;
		}

	}
}
void print(pixels* a) {
	if (a) {
		cout << a->index;
		if (a->leftBottom)
			print(a->leftBottom);
		if (a->rightBottom)
			print(a->rightBottom);
		if (a->leftTop)
			print(a->leftTop);
		if (a->rightTop)
			print(a->rightTop);
	}
}

int main() {
	pixels* head = new pixels;
	init(head);

	string str;
	cin >> str;

	test(head, str, 0);
	print(head);
}
