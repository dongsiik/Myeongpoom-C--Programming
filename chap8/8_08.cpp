#include <iostream>
using namespace std;

class Printer {
private:
	string model, manufacturer;
	int printedCount, availableCount;
public:
	Printer(string model, string manufacturer, int availableCount) {
		this->model = model; this->manufacturer = manufacturer; this->availableCount = availableCount; printedCount = 0;
	}
	bool print(int pages) {
		if (availableCount < pages) return false;
		else {
			availableCount -= pages; return true;
		}
	}
	string getModel() { return model; }
	string getManufacturer() { return manufacturer; }
	int getAvailableCount() { return availableCount; }
};

class inkJetPrinter :public Printer {
private:
	int availableInk;
public:
	inkJetPrinter(string model, string manufacturer, int availableCount, int availableInk)
		:Printer(model,manufacturer,availableCount){
		this->availableInk = availableInk;
	}
	void printInkJet(int pages) {
		if (availableInk < pages) cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		else {
			if (print(pages)) {
				cout << "����Ʈ�Ͽ����ϴ�." << endl;
				availableInk -= pages;
			}
			else cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		}
	}
	void show() {
		cout << getModel() << " ," << getManufacturer() << " ,���� ���� " << getAvailableCount()<<"�� ,���� ��ũ " << availableInk << endl; }
};

class laserPrinter :public Printer {
private:
	int availableToner;
public:
	laserPrinter(string model, string manufacturer, int availableCount, int availableToner)
		:Printer(model, manufacturer, availableCount) {
		this->availableToner = availableToner;
	}
	void printLaser(int pages) {
		if (availableToner < 1) cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		else {
			if (print(pages)) {
				cout << "����Ʈ�Ͽ����ϴ�." << endl;
				availableToner--;
			}
			else cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;;
		}
	}
	void show() {
		cout << getModel() << " ," << getManufacturer() << " ,���� ���� " << getAvailableCount() << "�� ,���� ��� " << availableToner << endl;
	}
};

int main() {
	int pChoice, pages;
	char conti;

	inkJetPrinter* ink = new inkJetPrinter("Officejet V40", "HP", 5, 10);
	laserPrinter* laser = new laserPrinter("SCX-6x45", "�Ｚ����", 3, 20);
	
	cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����" << endl;
	cout<<"��ũ�� : ";
	ink->show();
	cout<<"������ : ";
	laser->show();
	cout << endl;

	while (true) {
		cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> pChoice >> pages;
		if (pChoice == 1) ink->printInkJet(pages);
		else laser->printLaser(pages);
		ink->show();
		laser->show();
		cout << "��� ����Ʈ�Ͻðڽ��ϱ�(y/n)>>";
		cin >> conti;
		if (conti == 'n') break;
	}

	delete ink;
	delete laser;
}