//���� Circle Ŭ������ ����ϴ� 8���� 9���� ���� ���Ͽ� �ۼ��Ͽ���.

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << "�� ��" << endl; }
	Circle& operator++() { this->radius++; return *this; }	//8��
	Circle operator++(int x) {
		Circle tmp = *this;
		this->radius++;
		return tmp;
	}
	friend Circle operator +(int op1, Circle& op2);	//9��
};

Circle operator +(int op1, Circle& op2) {
	Circle tmp = op2;
	tmp.radius = op1 + op2.radius;
	return tmp;
}

int main() {
	Circle a(5), b(4);
	++a;
	b = a++;
	a.show();
	b.show(); 
/*	Circle a(5), b(4);
	b = 1 + a;
	a.show();
	b.show();	*/ //9�� main�Լ�
}