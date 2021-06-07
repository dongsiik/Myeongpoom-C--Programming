#include <iostream>
using namespace std;

class Circle {
	string name;
	int radius;
public:
	Circle(int radius = 1, string name = "") { this->radius = radius; this->name = name; }
	friend ostream& operator <<(ostream& outs, Circle c);
	friend istream& operator>>(istream& ins, Circle& c);
};

ostream& operator <<(ostream& outs, Circle c) {
	outs << "(������" << c.radius << "�� " << (string)c.name << ")";
	return outs;
}

istream& operator>>(istream& ins, Circle& c) {
	cout << "������ >> ";
	ins >> c.radius;
	cout << "�̸� >> ";
	ins >> c.name;
	return ins;
}

int main() {
	Circle d, w;
	cin >> d >> w;
	cout << d << w << endl;
}