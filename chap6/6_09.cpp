#include <iostream>
#include <string>
using namespace std;

class Board {
	static string content[100];
	static int num;
public:
	static void print();
	static void add(string c);
};

string Board::content[100];
int Board::num = 0;

void Board::print() {
	cout << "***** �Խ����Դϴ�. *****" << endl;
	for (int i = 0; i < num; i++) cout << i << ": " << content[i] << endl;
	cout << endl;
}

void Board::add(string c) {
	content[num] = c;
	num++;
}

int main() {
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿����ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}