#include <iostream>
using namespace std;

int main() {
	float a[5];
	cout << "5 ���� �Ǽ��� �Է��϶�>>";
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	float max = a[0];
	for (int i = 1; i < 5; i++) {
		if (a[i] > max) max = a[i];
	}
	cout << "���� ū �� = " << max;
	return 0;
}