#include <iostream>
using namespace std;

int sum(int a, int b) {
	if (a > b) throw "�߸��� �Է�";
	if (a < 0 || b < 0) throw "���� ó�� �� ��";
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;
	}
	return sum;
}

int main() {
	try {
		cout << sum(2, 5) << endl;
		cout << sum(-1, 5) << endl;
	}
	catch (const char* s) {
		cout << s << endl;
	}
}