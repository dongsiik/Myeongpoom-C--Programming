#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ifstream first("a.jpg", ios::in | ios::binary);
	if (!first) {
		cout << "ù��° ���� ���� ����" << endl;
		return 0;
	}
	ifstream second("b.jpg", ios::in | ios::binary);
	if (!second) {
		cout << "�ι�° ���� ���� ����" << endl;
		return 0;
	}
	bool chk = true;
	int f;
	while ((f = first.get()) != EOF) {
		int s = second.get();
		if (s == EOF) chk = false;
		if (f != s) chk = false;
	}

	int s = second.get();
	if (s != EOF) chk = false;

	if (chk) cout << "����";
	else cout << "�ٸ�";

}