#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	string name;
	string tel;
public:
	Person() {};
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel) { this->name = name; this->tel = tel; }
};

int main() {
	Person p[3];
	string name;
	string tel;

	cout << "�̸��� ��ȭ��ȣ�� �Է����ּ���" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "��� " << i + 1 << ">> ";
		cin >> name >> tel;
		p[i].set(name, tel);
	}
	cout << "��� ����� �̸��� " << p[0].getName() << ' ' << p[1].getName() << ' ' << p[2].getName() << endl;

	cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";
	cin >> name;
	for (int i = 0; i < 3; i++) {
		if (p[i].getName() == name) {
			cout << "��ȭ ��ȣ�� " << p[i].getTel();
			break;
		}
	}

	return 0;
}