#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main() {
	ifstream fin("C:\\windows\\system.ini");
	if (!fin) {
		cout << "���� ���� ����"<<endl;
		return 0;
	}

	string s;
	int count = 0;
	while (getline(fin, s)) {
		count++;
		cout << count << " : " << s << endl;
	}
	fin.close();
}