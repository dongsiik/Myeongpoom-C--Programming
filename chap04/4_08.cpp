#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

int main() {
	int n;
	int r;
	int cnt = 0;

	cout << "���� ���� >> ";
	cin >> n;
	Circle* c = new Circle[n];

	for (int i =0; i < n; i++) {
		cout << "�� " << i+1 << "�� ������ >> ";
		cin >> r;
		c[i].setRadius(r);
		if (c[i].getArea() > 100) cnt++;
	}
	cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�";
	return 0;
}