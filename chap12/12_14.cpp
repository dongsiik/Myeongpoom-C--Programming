//���� 12_14�� ������ �����ϴ� �ҽ��ڵ尡 616�ʿ� �ִ� ���� 12-8�� �̹� �ۼ��Ǿ� �־ �״�� �Ű���.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("c:\\windows\\system.ini", ios::in | ios::binary);
	if (!fin) {
		cout << "���� ���� ����" << endl;
		return 0;
	}
	int cnt = 0;
	char s[32];
	while (!fin.eof()) {
		fin.read(s, 32);
		int n = fin.gcount();
		cout.write(s, n);
		cnt += n;
	}
	cout << "���� ����Ʈ ���� " << cnt << endl;
	fin.close();
}