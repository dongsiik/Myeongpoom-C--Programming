#include <iostream>
using namespace std;


int main() {
	int menuNum, people;
	string menu[3] = { "«��", "¥��", "������" };
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****" << endl;
	while(true) {
		cout << "«��:1, ¥��:2, ������:3, ����:4>>";
		cin >> menuNum;
		if (menuNum == 4) {
			cout << "���� ������ �������ϴ�." << endl;
			break;
		}
		else if (menuNum > 0 && menuNum < 4) {
			cout << "���κ�?";
			cin >> people;
			cout << menu[menuNum - 1] << ' ' << people << "�κ� ���Խ��ϴ�" << endl;
		}
		else cout << "�ٽ� �ֹ��ϼ���!!"<<endl;
	}
	return 0;
}