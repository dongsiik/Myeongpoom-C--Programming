#include <iostream>
#include <string>
using namespace std;

bool bigger(int a, int b, int &big) {
	if (a == b) {
		big = a;
		return true;
	}
	else {
		big = (a > b ? a : b);
		return false;
	}
}

int main() {
	int a, b;
	int big = 0;
	cout << "���� ���� �� �� �Է� ";
	cin >> a >> b;
	b = bigger(a, b, big);
	if (b == true) cout << "�� ���� �����ϴ�." << endl;
	else cout << "ū ���� " << big;
	return 0;
}