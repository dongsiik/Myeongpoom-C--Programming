#include "Console.h"

int Console::menuInput() {
	int tmp;
	cout << "����:1, ���:2, ����:3, ������:4>> ";
	cin >> tmp;
	return tmp;
}

int Console::timeInput() {
	int tmp;
	cout << "07��:1, 12��:2, 17��:3>> ";
	cin >> tmp;
	return tmp;
}

int Console::seatInput() {
	int tmp;
	cout << "�¼���ȣ>> ";
	cin >> tmp;
	return tmp;
}

string Console::nameInput() {
	string tmp;
	cout << "�̸� �Է�>> ";
	cin >> tmp;
	return tmp;
}