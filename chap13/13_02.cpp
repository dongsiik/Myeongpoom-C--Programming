#include <iostream>
using namespace std;

char grade(int a) {
	if (a < 0 || a>100) throw "������ 0~100 ���̿����մϴ�.";
	if (a < 60) return 'F';
	else if (a < 70) return 'D';
	else if (a < 80) return 'C';
	else if (a < 90) return 'B';
	else if (a < 100) return 'A';
}

int main() {
	int point;
	try {
		cout << "������ �Է��ϼ���. >>";
		cin >> point;
		cout << grade(point);
	}
	catch (const char* s) {
		cout << s << endl;
	}
}