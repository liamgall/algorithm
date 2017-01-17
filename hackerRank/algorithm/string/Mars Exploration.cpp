#include<iostream>
#include<string>
using namespace std;

int		main(void) {
	char *str;
	int		answer = 0;
	str = (char*)malloc(sizeof(char) * 100);
	scanf("%s", str);
	while(*str){
		if (str[0] != 'S')
			answer++;
		if (str[1] != 'O')
			answer++;
		if (str[2] != 'S')
			answer++;
		str += 3;
	}
	cout << answer;
	return 0;
}
