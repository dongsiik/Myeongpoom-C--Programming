#include <iostream>
#include "UI.h"
using namespace std;

int UI::menuUI() {
	int menu;
	cout << "����:1, ����:2, ��κ���:3, ����:4  >> ";
	cin >> menu;
	return menu;
}

int UI::insertUI() {
	int tmp;
	cout << "��:1, ��:2, �簢��:3 >> ";
	cin >> tmp;
	return tmp;
}

int UI::removeUI() {
	int tmp;
	cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
	cin >> tmp;
	return tmp;
}