#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class EnKr {
private:
	string En;
	string Kr;
public:
	string getEn() { return En; };
	string getKr() { return Kr; };
	void setEn(string En) { this->En = En; }
	void setKr(string Kr) { this->Kr = Kr; }
	void set(string En, string Kr) { setEn(En); setKr(Kr); }
};

int main() {
	vector<EnKr> v;
	EnKr e;
	e.set("honey", "����");
	v.push_back(e);
	e.set("doll", "����");
	v.push_back(e);
	e.set("stock", "�ֽ�");
	v.push_back(e);
	e.set("picture", "����");
	v.push_back(e);
	e.set("bear", "��");
	v.push_back(e);
	e.set("self", "�ڱ�");
	v.push_back(e);
	e.set("painting", "�׸�");
	v.push_back(e);

	srand((unsigned int)time(0));
	cout << "***** ���� ���� �׽�Ʈ�� �����մϴ�. *****\n";
	int input;
	string Einput;
	string Kinput;
	int bogi[4] = { -1,-1,-1,-1 };
	bool dupChk;

	while (true) {
		cout << "���� ����: 1, ���� �׽�Ʈ: 2, ���α׷� ����: �׿�Ű >>";
		cin >> input;
		if (input < 1 || input>2) break;
		else if (input == 1) {
			cout << "���� ������ exit�� �Է��ϸ� �Է� ��" << endl;
			cin.ignore();
			while (true) {
				cout << "���� >>";
				getline(cin, Einput);
				if (Einput == "exit") break;
				cout << "�ѱ� >>";
				getline(cin, Kinput);
				e.set(Einput, Kinput);
				v.push_back(e);
			}
		}
		else {
			cout << "���� ���� �׽�Ʈ�� �����մϴ�. 1~4 �� �ٸ� �Է½� ����." << endl;
			while (true) {
				for (int i = 0; i < 4; i++) {
					dupChk = false;
					while (!dupChk) {
						dupChk = true;
						bogi[i] = rand() % v.size();
						for (int j = 0; j < i; j++) {
							if (bogi[j] == bogi[i]) {
								dupChk = false; break;
							}
						}
					}
				}
				int n = rand() % 4;
				cout << v[bogi[n]].getEn() << "?" << endl;
				cout << "(1) " << v[bogi[0]].getKr() << " (2) " << v[bogi[1]].getKr() << " (3) " << v[bogi[2]].getKr() << " (4) " << v[bogi[3]].getKr() << " :>";
				cin >> input;
				if (input == (n + 1)) cout << "Excellent !!" << endl;
				else if (input >= 1 && input <= 4) cout << "No. !!" << endl;
				else break;
			}
		}
		cout << endl;
	}

}