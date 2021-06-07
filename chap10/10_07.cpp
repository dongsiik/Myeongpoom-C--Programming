#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return radius; }
	bool operator >(Circle& op2) { //���� �ۼ��� ������ �ߺ�
		if (this->radius > op2.getRadius()) return true;
		else return false;
	}
};

template <class T>
T bigger(T a, T b) {
	if (a > b) return a;	//������ �ҽ����� Circle���� ��Һ񱳸� �� �� ��� ������ �߻�����.
	else return b;
}


int main() {
	int a = 20, b = 50, c;
	c = bigger(a, b);
	cout << "20�� 50�� ū ���� " << c << endl;
	Circle waffle(10), pizza(20), y;
	y = bigger(waffle, pizza);
	cout << "waffle�� pizza �� ū ���� �������� " << y.getRadius() << endl;
}