#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int n;
	cout << "�� ���� �Է��ϼ���>>";
	cin >> n;
	for (int k = 1; k <= n; k++) {
		sum += k;
	}
	cout << "1���� " << n << "������ ���� " << sum << "�Դϴ�.\n";
	return 0;
}