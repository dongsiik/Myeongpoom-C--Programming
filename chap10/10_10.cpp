#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

class Nation {
private:
	string nation;
	string capital;
public:
	void setNation(string nation, string capital) { this->nation = nation; this->capital = capital; }
	string getNation() { return nation; }
	string getCapital() { return capital; }
};

int main() {
	vector<Nation> v;
	Nation n;
	n.setNation("�̱�", "�ͽ���");
	v.push_back(n);
	n.setNation("����", "������");
	v.push_back(n);
	n.setNation("�븸", "Ÿ������");
	v.push_back(n);
	n.setNation("����", "����");
	v.push_back(n);
	n.setNation("�ѱ�", "����");
	v.push_back(n);
	n.setNation("������", "���");
	v.push_back(n);
	n.setNation("�Ϻ�", "����");
	v.push_back(n);
	n.setNation("������", "�ĸ�");
	v.push_back(n);
	n.setNation("����", "������");
	v.push_back(n);

	bool tf = true;
	int choice = 0;
	string nInput, cInput;
	srand((unsigned int)time(0));

	cout << "***** ���� ���� ���߱� ������ �����մϴ� *****\n";
	while (tf) {
		bool dupChk = false;
		cout << "���� �Է�: 1, ����: 2, ����: 3>>";
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "���� " << v.size() << "���� ���� �ԷµǾ� �ֽ��ϴ�.\n";
			cout << "����� ������ �Է��ϼ���(no no�� �Է³�)\n";
			while (true) {
				dupChk = false;
				cout << v.size() + 1 << ">>";
				cin >> nInput >> cInput;
				if (nInput == "no" && cInput == "no") 	break;

				for (int i = 0; i < v.size(); i++) {
					if (v[i].getNation() == nInput) dupChk = true;
				}
				if (dupChk) cout << "already exists !!" << endl;
				else {
					n.setNation(nInput, cInput);
					v.push_back(n);
				}
			}
			break;
		case 2:
			while (true) {
				int n = rand() % v.size();
				cout << v[n].getNation() << "�� ������?";
				cin >> cInput;
				if (cInput == "exit") break;
				else if (cInput == v[n].getCapital()) cout << "Correct !!" << endl;
				else cout << "NO !!" << endl;
			}
			break;
		case 3:
			tf = false;
			break;
			
		}
	}
}