//���� Ŀ�ǿ� �� Ŀ���� ��ᰡ ������ ���ÿ� ��õǾ� ���� �ʾ�
//���� Ŀ�Ǵ� Ŀ��, ũ��, ��, ���� ���� ��Ŀ�Ǵ� Ŀ��, �� , ���� ���� ���ٰ� �����Ͽ���

#include <iostream>
#include <iomanip>
using namespace std;

class tong {
	string name;
	int amount;
public:
	tong(string name = "", int amount = 3) { this->name = name; this->amount = amount; }
	friend ostream& operator<< (ostream & outs, tong & t);
	void fill() { amount = 3; }
	void use(int amount=1) { this->amount -= amount; }
	bool amountChk(int amount=1) {
		if (this->amount >= amount) return true;
		else return false;
	}
};

class CoffeeMachine {
	tong* t;
public:
	CoffeeMachine() {
		cout << "------��ǰ Ŀ�� ���Ǳ��մϴ�.------" << endl;
		t = new tong[5]{ tong("Coffee"),tong("Sugar"),tong("CREAM"),tong("Water"),tong("Cup") };
		cout << *this << endl;
	}
	friend ostream& operator<<(ostream& outs, CoffeeMachine& CM);
	void run();
};

istream& menu(istream& ins) {
	cout << "���� Ŀ��:0, ���� Ŀ��:1, �� Ŀ��:2, ä���:3, ����:4>> ";
	return ins;
}

ostream& operator<<(ostream& outs, tong& t) {
	outs << setw(8) << t.name;
	for (int i = 0; i < t.amount; i++) outs << '*';
	outs << '\n';
	return outs;
}

ostream& operator<<(ostream& outs, CoffeeMachine& CM) {
	for (int i = 0; i < 5; i++) outs << CM.t[i];
	outs << '\n';
	return outs;
}

void CoffeeMachine::run() {
	int choice;
	while (true) {
		cin >> menu >> choice;
		switch (choice) {
		case 4:
			return;
		case 3:
			for (int i = 0; i < 5; i++) t[i].fill();
			cout << "��� ���� ä��ϴ�.~~" << endl<< *this;
			break;
		case 0:
			if (t[0].amountChk() && t[3].amountChk() && t[4].amountChk() && t[2].amountChk()) {
				cout << "���ִ� ���� Ŀ�� ���Խ��ϴ�~~" << endl;
				t[0].use();
				t[3].use();
				t[4].use();
				t[2].use();
				cout << *this;
			}
			else {
				cout << "��ᰡ �����մϴ�~~" << endl;
				cout << *this;
			}
			break;
		case 1:
			if (t[0].amountChk() && t[3].amountChk() && t[4].amountChk() && t[1].amountChk()) {
				cout << "���ִ� ���� Ŀ�� ���Խ��ϴ�~~" << endl;
				t[0].use();
				t[3].use();
				t[4].use();
				t[1].use();
				cout << *this;
			}
			else {
				cout << "��ᰡ �����մϴ�~~" << endl;
				cout << *this;
			}
			break;
		case 2:
			if (t[0].amountChk() && t[3].amountChk() && t[4].amountChk()) {
				cout << "���ִ� �� Ŀ�� ���Խ��ϴ�~~" << endl;
				t[0].use();
				t[3].use();
				t[4].use();
				cout << *this;
			}
			else {
				cout << "��ᰡ �����մϴ�~~" << endl;
				cout << *this;
			}
			break;
		}
	}
}

int main() {
	cout.setf(ios::left);
	CoffeeMachine CM;
	CM.run();
}