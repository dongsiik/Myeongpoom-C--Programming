// ������ ���� ������� "�ҳ� �ô�", "�ҳ� �ô� ��" �� ������ ���Ե� ���ڿ��� �Է¹޾���.
// ������ �Է¹޴� ������ ����� ã�� ���ؼ� �Է¿��� ������ ���ٰ� �����Ͽ���.

#include <iostream>
#include <string>
using namespace std;

class Phone {
	string name;
	string telnum;
	string address;
public:
	Phone(string name = "", string telnum = "", string address = "") {
		this->name = name;
		this->telnum = telnum;
		this->address = address;
	}
	friend ostream& operator<<(ostream& outs, Phone & p);
	friend istream& operator>>(istream & ins, Phone & p);
};
ostream& operator<<(ostream& outs, Phone& p) {
	outs << "(" << p.name << "," << p.telnum << "," << p.address << ")";
	return outs;
}

istream& operator>>(istream& ins, Phone& p) {
	cout << "�̸�:";
	ins >> p.name;
	cout << "��ȭ��ȣ:";
	ins >> p.telnum;
	cout << "�ּ�:";
	ins >> p.address;
	return ins;
}

int main() {
	Phone girl, boy;
	cin >> girl >> boy;
	cout << girl << endl << boy << endl;
}