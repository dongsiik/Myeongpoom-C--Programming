#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	string s;
	srand((unsigned int)time(0));

	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
	while (true) {
		cout << ">>";
		getline(cin, s);
		if (s == "exit") break;
		s[rand() % s.size()] = 97 + (rand() % 26);
		cout << s << endl;
	}
	return 0;
}