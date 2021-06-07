#include "Adder.h"

void LoopAdder::read() {
	cout << name << ":" << endl;
	cout << "ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ��� >>";
	cin >> x >> y;
}
void LoopAdder::write() {
	cout << x << "���� " << y << "������ �� = " << sum << " �Դϴ�" << endl;
}

void LoopAdder::run() {
	read();
	sum = calculate();
	write();
}

int ForLoopAdder::calculate() {
	int sum = 0;
	for (int i = getX(); i <= getY(); i++) {
		sum += i;
	}
	return sum;
}

int WhileLoopAdder::calculate() {
	int sum = 0;
	int i = getX();
	while (i <= getY()) {
		sum += i;
		i++;
	}
	return sum;
}

int DoWhileLoopAdder::calculate() {
	int sum = 0;
	int i = getX();
	do {
		sum += i;
		i++;
	} while (i <= getY());

	return sum;
}