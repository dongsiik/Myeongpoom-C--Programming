#include <iostream>
#include "CVM.h"
using namespace std;

void CoffeeVendingMachine::fill() {
	for (int i = 0; i < 3; i++) tong[i].fill();
}

void CoffeeVendingMachine::selectEspresso() {
	if (tong[0].getSize() < 1 || tong[1].getSize() < 1) cout << "���ᰡ �����մϴ�\n";
	else {
		cout << "���������� �弼��\n";
		tong[0].consume();
		tong[1].consume();
	}
}

void CoffeeVendingMachine::selectAmericano() {
	if (tong[0].getSize() < 1 || tong[1].getSize() < 2) cout << "���ᰡ �����մϴ�\n";
	else {
		cout << "�Ƹ޸�ī�� �弼��\n";
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
	}
}

void CoffeeVendingMachine::selectSugarCoffee() {
	if (tong[0].getSize() < 1 || tong[1].getSize() < 2 || tong[2].getSize()<1) cout << "���ᰡ �����մϴ�\n";
	else {
		cout << "����Ŀ�� �弼��\n";
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();
	}
}

void CoffeeVendingMachine::show() {
	cout << "Ŀ�� " << tong[0].getSize() << ", �� " << tong[1].getSize() << ", ���� " << tong[2].getSize() << endl;
}

void CoffeeVendingMachine::run() {
	int choice;
	cout << "***** Ŀ�����Ǳ⸦ �۵��մϴ�. *****\n";
	while (true) {
		cout << "�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���)>>";
		cin >> choice;
		switch (choice) {
		case 1:
			selectEspresso();
			break;
		case 2:
			selectAmericano();
			break;
		case 3:
			selectSugarCoffee();
			break;
		case 4:
			show();
			break;
		case 5:
			fill();
			break;
		}
	}
}