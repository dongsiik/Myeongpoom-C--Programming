#include <iostream>
#include "UI.h"
using namespace std;

int UI::menuUI() {
	int menu;
	cout << "����:1, ����:2, ��κ���:3, ����:4  >> ";
	cin >> menu;
	return menu;
}

void UI::insertUI(int& radius, string& name) {
	cout << "�����ϰ��� �ϴ� ���� �������� �̸��� >>";
	cin >> radius >> name;
}

string UI::removeUI() {
	string name;
	cout << "�����ϰ��� �ϴ� ���� �̸��� >>";
	cin >> name;
	return name;
}