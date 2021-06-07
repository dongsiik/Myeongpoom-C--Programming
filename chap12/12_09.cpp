#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void fileRead(vector<string>& v, ifstream& fin) {
	string line;
	while (getline(fin, line)) {
		v.push_back(line);
	}
}

int main() {
	vector<string> wordVector;
	ifstream fin("C:\\windows\\system.ini");
	if (!fin) {
		cout << "ini ���� ���� ����" << endl;
		return 0;
	}
	fileRead(wordVector, fin);
	fin.close();

	cout << "C:\\windows\\system.ini ���� �б� �Ϸ�" << endl;
	cout << "���� ��ȣ�� �Է��ϼ���. 1���� ���� ���� �Է��ϸ� ����" << endl;

	int lineNum = 0;
	while (true) {
		cout << ": ";
		cin >> lineNum;
		if (lineNum < 1) {
			cout << "���� �մϴ�." << endl;
			break;
		}
		else if(lineNum<=wordVector.size()) cout << wordVector[lineNum - 1] << endl;
	}
}