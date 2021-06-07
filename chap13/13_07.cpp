#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* srcFile = "c:\\temp\\desert.jpg";
	const char* destFile = "c:\\temp\\copydesert.jpg";

	try {
		ifstream fsrc(srcFile, ios::in | ios::binary);
		if (!fsrc) throw "���� ���� ���� ����";
		ofstream fdest(destFile, ios::out | ios::binary);
		if (!fdest) throw "���纻 ���� ���� ����";

		int c;
		while ((c = fsrc.get()) != EOF) {
			fdest.put(c);
		}
		cout << srcFile << "�� " << destFile << "�� ���� �Ϸ�" << endl;
		fsrc.close();
		fdest.close();
	}
	catch (const char* s) {
		cout << "���� �߻� : " << s << endl;
	}

}