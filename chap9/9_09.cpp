#include <iostream>
using namespace std;

class Printer {
protected:
	string model, manufacturer;
	int printedCount, availableCount;
public:
	Printer(string model, string manufacturer, int availableCount) {
		this->model = model; this->manufacturer = manufacturer; this->availableCount = availableCount; printedCount = 0;
	}
	virtual void print(int pages) {
		if (availableCount < pages) cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		else {
			cout << "����Ʈ�Ͽ����ϴ�." << endl;
			availableCount -= pages;
		}
	}
	virtual void show() {
		cout << model << " ," << manufacturer << " ,���� ���� " << availableCount << "��"<< endl;
	}
};

class InkJetPrinter :public Printer {
protected:
	int availableInk;
public:
	InkJetPrinter(string model, string manufacturer, int availableCount, int availableInk)
		:Printer(model, manufacturer, availableCount) {
		this->availableInk = availableInk;
	}
	virtual void print(int pages) {
		if (availableInk < pages) cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		else {
			if (availableCount >= pages) {
				cout << "����Ʈ�Ͽ����ϴ�." << endl;
				availableCount -= pages;
				availableInk -= pages;
			}
			else cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		}
	}
	virtual void show() {
		cout << model << " ," << manufacturer << " ,���� ���� " << availableCount << "��, ���� ��ũ "<<availableInk << endl;
	}
};

class LaserPrinter :public Printer {
private:
	int availableToner;
public:
	LaserPrinter(string model, string manufacturer, int availableCount, int availableToner)
		:Printer(model, manufacturer, availableCount) {
		this->availableToner = availableToner;
	}
	virtual void print(int pages) {
		if (availableToner < 1) cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		else {
			if (availableCount>=pages) {
				cout << "����Ʈ�Ͽ����ϴ�." << endl;
				availableCount -= pages;
				availableToner -= 1;
				cout << availableToner;
			}
			else cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;;
		}
	}
	virtual void show() {
		cout << model << " ," << manufacturer << " ,���� ���� " << availableCount << "��, ���� ��� " << availableToner << endl;
	}
};

int main() {
	int pChoice, pages;
	char conti;
	Printer* p[2];
	p[0]=new InkJetPrinter("Officejet V40", "HP", 5, 10);
	p[1]=new LaserPrinter("SCX-6x45", "�Ｚ����", 3, 20);

	cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����" << endl;
	cout << "��ũ�� : ";
	p[0]->show();
	cout << "������ : ";
	p[1]->show();
	cout << endl;

	while (true) {
		cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> pChoice >> pages;
		p[pChoice - 1]->print(pages);
		p[0]->show();
		p[1]->show();
		cout << "��� ����Ʈ�Ͻðڽ��ϱ�(y/n)>>";
		cin >> conti;
		cout << endl;
		if (conti == 'n') break;
	}
	delete p[0];
	delete p[1];
}