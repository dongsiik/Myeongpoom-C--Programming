#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	map<string, string> WHO;
	string name;
	string pw;
	int menu;
	bool conti = true;

	cout << "***** ��ȣ ���� ���α׷� WHO�� �����մϴ� *****" << endl;
	while (conti) {
		cout << "����:1, �˻�:2, ����: 3 >>  ";
		cin >> menu;
		switch (menu) {
		case 1:
			cout << "�̸� ��ȣ>> ";
			cin >> name >> pw;
			WHO.insert(make_pair(name, pw));
			break;
		case 2:
			cout << "�̸�? ";
			cin >> name;
			if (WHO.find(name) == WHO.end()) cout << "�ش��ϴ� �̸� ����" << endl;
			else {
				while (true) {
					cout << "��ȣ? ";
					cin >> pw;
					if (pw == WHO[name]) {
						cout << "���!!" << endl;
						break;
					}
					else cout << "����~~" << endl;
				}
			}
			break;
		case 3:
			cout << "���α׷��� �����մϴ�...";
			conti = false;
			break;
		}
	}
}