#include <iostream>
using namespace std;

int main() {
	string coffee[3] = { "����������","�Ƹ޸�ī��","īǪġ��" };
	int price[3] = { 2000, 2300, 2500 };
	string cof;
	int num;
	int sum = 0;

	cout << coffee[0] << ' ' << price[0] << "��, " << coffee[1] << ' ' << price[1] << "��, " << coffee[2] << ' ' << price[2] << "���Դϴ�.\n";
	while (sum<20000) {
		cout << "�ֹ�>>";
		cin >> cof >> num;
		for (int i = 0; i < 3; i++) {
			if (coffee[i] == cof) {
				sum += price[i] * num;
				cout << price[i] * num << "���Դϴ�. ���ְ� �弼��" << endl;
			}
			else {
				cout << "�ֹ��Ͻ� Ŀ�� ������ �ٽ� �� �� Ȯ�����ּ���" << endl;
			}
		}
	}
	cout << "���� " << sum << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�.���� ����~~~" << endl;
	return 0;
}