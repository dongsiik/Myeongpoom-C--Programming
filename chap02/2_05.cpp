#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[100];
	cout << "���ڿ��� �Է��϶�(100�� �̸�).\n";
	cin.getline(str, 100,'\n');
	int cnt = 0;
	for (int i = 0; i<strlen(str); i++) {
		if (str[i] == 'x') cnt++;
	}
	cout << "x�� ������ " << cnt;

	return 0;
}