#include <iostream>
#include <fstream>
using namespace std;


int main() {
	ifstream fin("C:\\windows\\system.ini");
	if (!fin) {
		cout << "���� ���� ����"<<endl;
		return 0;
	}

	int ch = 0;
	while ((ch=fin.get())!=EOF) {
		cout.put(toupper(ch));
	}
	fin.close();
}