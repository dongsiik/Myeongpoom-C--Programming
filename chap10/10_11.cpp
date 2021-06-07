#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
private:
	int year;
	string name;
	string author;
public:
	int getYear() { return year; }
	string getName() { return name; }
	string getAuthor() { return author; }
	void setYear(int year) { this->year = year; }
	void setName(string name) { this->name = name; }
	void setAuthor(string author) { this->author = author; }
	void show() { cout << year << "�⵵, " << name <<", "<< author<<endl; }
};

int main() {
	vector<Book> v;
	Book b;
	int year;
	string name, author;

	cout << "�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�." << endl;
	while (true) {
		cout << "�⵵>>";
		cin >> year;
		cin.ignore();
		if (year == -1) break;
		cout << "å�̸�>>";
		getline(cin, name);
		cout << "����>>";
		getline(cin, author);
		b.setYear(year);
		b.setName(name);
		b.setAuthor(author);
		v.push_back(b);
	}

	cout << "�� �԰�� å�� " << v.size() << "�� �Դϴ�." << endl;
	cout << "�˻��ϰ��� �ϴ� ���� �̸��� �Է��ϼ���>>";
	getline(cin, author);
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getAuthor() == author) v[i].show();
	}

	cout << "�˻��ϰ��� �ϴ� �⵵�� �Է��ϼ���>>";
	cin >> year;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getYear() == year) v[i].show();
	}
}