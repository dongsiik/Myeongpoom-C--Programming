#include <iostream>
#include <fstream>
using namespace std;


int main() {
	ifstream fin("C:\\temp\\test.txt");
	if (!fin) {
		cout << "���� ���� ����\n";
		return 0;
	}

	int ch;
	while ((ch = fin.get() )!= EOF) {
		cout << (char)ch;
	}
	fin.close();
}