#include <iostream>
#include <fstream>
using namespace std;
//12_5���� �� ������ ������ �� �� ���� ��µ��� �ʾƾ���

int main() {
	ifstream fin("C:\\windows\\system.ini");
	if (!fin) {
		cout << "���� ���� ���� ����"<<endl;
		return 0;
	}
	ofstream fout("C:\\temp\\system.txt");
	if (!fout) {
		cout << "���纻 ���� ���� ����" << endl;
		return 0;
	}

	int ch = 0;
	while ((ch=fin.get())!=EOF) {
		fout.put((char)toupper(ch));
	}
	fin.close();
	fout.close();
}