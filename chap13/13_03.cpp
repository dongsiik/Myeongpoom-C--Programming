#include <iostream>
using namespace std;

int get() throw(const char*) {
	int g;
	cout << "0~9 ������ ���� �Է� >> ";
	cin >> g;
	if (g < 0 || g>10) throw "input fault";
	return g;
}

int main() {
	while (true) {
		try {
			int a = get();
			int b = get();
			cout << a << "X" << b << "=" << a * b << endl;
		}
		catch (const char* s) {
			cout << s << " ���� �߻�, ����� �� ����" << endl;
		}
	}
}