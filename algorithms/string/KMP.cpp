#include<iostream>
#include<string>
using namespace std;

//KMP에 사용할 prefix table
void preKMP(string needle, int prefix[]){
	int		needleLen = needle.length(), k;
	prefix[0] = -1;
	for (int i = 1; i <= needleLen; ++i){
		k = prefix[i - 1];
		while (k >= 0){
			if (needle[k] == needle[i - 1])
				break;
			else
				k = prefix[k];
		}
		prefix[i] = k + 1;
	}
}

// KMP 알고리즘
void	KMP(string needle, string haystack) {
	int		i = 0, j = 0;
	int		ptrnLen = needle.length();
	int		txtLen = haystack.length();
	int*	prefix = new int[ptrnLen];

	preKMP(needle, prefix);

	while (i < txtLen) {
		while (j >= 0 && haystack[i] != needle[j]) {
			j = prefix[j];
		}
		++i, ++j;
		if (j == ptrnLen) {
			cout << "위치 " << i - ptrnLen << "에서 발견" << endl;
			j = prefix[j];
		}
	}
}
int		main(void) {
	string	needle;
	string	haystack = "Her parents had taken to chaining her to the house by her feet, but tonight was different.\
						The house was full of guests, and she was free to move around. While her parents were\
						distracted, she ran into town and found a lawyer.She told him that after fleeing one abusive\
						marriage arranged by her parents, they were forcing her to marry again.";



	cout << needle << "검색엔진" << endl << endl << "검색어를 입력하세요(Case-sensitive) : ";
	cin >> needle;

	KMP(needle, haystack);

	return 0;
}
