#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius) { this->name = name; this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
	string getName() { return name; }
};

class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size);
	~CircleManager();
	void searchByName();
	void searchByArea();
};
CircleManager::CircleManager(int size) {
	this->size = size;
	p = new Circle[size];
	string s;
	int r;

	for (int i = 0; i < size; i++) {
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
		cin >> s >> r;
		p[i].setCircle(s, r);
	}
}

CircleManager::~CircleManager() {
	delete[] p;
}

void CircleManager::searchByName() {
	string name;
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >>";
	cin >> name;
	for (int i = 0; i < size; i++) {
		if (p[i].getName() == name) {
			cout << name << "�� ������ " << p[i].getArea() << endl;
			return;
		}
	}
	cout << "�̸��� ��ġ�ϴ� ���� �����ϴ�." << endl;
}

void CircleManager::searchByArea() {
	int area;
	int chk = 0;
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> area;
	cout << area << "���� ū ���� �˻��մϴ�.\n";
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > area) {
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << ",";
			chk = 1;
		}
	}
	if (chk == 0) cout << "�ش��ϴ� ���� �����ϴ�.\n";
	else cout << endl;
}
int main() {
	int n;
	cout << "���� ���� >> ";
	cin >> n;
	CircleManager CM(n);
	CM.searchByName();
	CM.searchByArea();
	return 0;
}