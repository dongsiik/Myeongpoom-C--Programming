//Book Ŭ������ �̿��ϴ� 1~4�� �� �ҽ����Ͽ� �ۼ��Ͽ���.
//1.(2)���� �ܺ� �Լ��� ������ ������ �Լ��� �ּ�ó���Ͽ���.

#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	string getTitle() { return title; }
	Book& operator +=(int price) { this->price += price; return *this; }
	Book& operator -=(int price) { this->price -= price; return *this; }
//	friend Book& operator +=(Book& b, int p);	// 1.(2)
//	friend Book& operator -=(Book& b, int p);	// 1.(2)
	bool operator ==(int price) {
		if (this->price == price) return true;
		else return false;
	}
	bool operator ==(string title) {
		if (this->title == title) return true;
		else return false;
	}
	bool operator ==(Book& op2) {
		if (this->title == op2.title && this->price == op2.price) return true;
		else return false;
	}
	bool operator !() {
		if (this->price == 0) return true;
		else return false;
	}
	friend bool operator <(string op1, Book& op2);
};

// 1.(2)���� Ŭ���� �ܺ��Լ��� ������ ������ �Լ�
// Book& operator +=(Book& b, int p){ b.price += p; return b; }
// Book& operator -=(Book& b, int p){ b.price -= p; return b; }

bool operator <(string op1, Book& op2) {
	if (op1 < op2.title) return true;
	else return false;
}

int main() {
	//���� 1��
/*	Book a("û��", 20000, 300), b("�̷�", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show(); */

	//���� 2��
/*	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000) cout << "���� 30000��" << endl;
	if (a == "��ǰ C++") cout << "��ǰ C++�Դϴ�." << endl;
	if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl; */

	//���� 3��
/*	Book book("�������", 0, 50);
	if (!book) cout << "��¥��" << endl; */

	//���� 4��
	Book a("û��", 20000, 300);
	string b;
	cout << "å �̸��� �Է��ϼ���>>";
	getline(cin, b);
	if (b < a)
		cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!" << endl;
}