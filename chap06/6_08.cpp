#include <iostream>
#include <string>
using namespace std;

class Trace {
private:
	static string tag[100];
	static string content[100];
	static int num;
public:
	static void put(string t, string c) { tag[num] = t; content[num] = c; num++; }
	static void print(string t);
	static void print();
};

string Trace::tag[100];
string Trace::content[100];
int Trace::num = 0;

void Trace::print(string t) {
	cout << "----- " << t << "�±��� Trace ������ ����մϴ�. -----" << endl;
	for (int i = 0; i < num; i++) {
		if (tag[i] == t) cout << tag[i] << ':' << content[i] << endl;
	}
}

void Trace::print() {
	cout << "----- ��� �±��� Trace ������ ����մϴ�. -----" << endl;
	for (int i = 0; i < num; i++) cout << tag[i] << ':' << content[i] << endl;
}

void f() {
	int a, b, c;
	cout << "�� ���� ������ �Է��ϼ���>>";
	cin >> a >> b;
	Trace::put("f()", "������ �Է� �޾���");
	c = a + b;
	Trace::put("f()", "�� ���");
	cout << "���� " << c << endl;
}
int main() {
	Trace::put("main()", "���α׷��� �����մϴ�");
	f();
	Trace::put("main()", "����");

	Trace::print("f()");
	Trace::print();
}