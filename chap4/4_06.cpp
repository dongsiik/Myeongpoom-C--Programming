#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
	while (true) {
		cout << ">>";
		getline(cin, s);
		if (s == "exit") break;
		for (int i = 0; i < s.size(); i++) {
			cout << s[s.size() - 1 - i];
		}
		cout << endl;
	}
	return 0;
}