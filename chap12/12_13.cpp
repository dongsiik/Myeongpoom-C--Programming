#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Words {
private:
	ifstream fin;
	vector<string> wordVector;
public:
	Words();
	~Words();
	void run();
};

Words::Words() {
	fin.open("words.txt");
	if (!fin) {
		cout << "���� ���� ����" << endl;
		exit(0);
	}
	string line;
	while (getline(fin, line)) {
		wordVector.push_back(line);
	}
	cout << "...words.txt ���� �ε� �Ϸ�" << endl;
}

Words::~Words() {
	fin.close();
}

void Words::run() {
	cout << "�˻��� �����մϴ�. �ܾ �Է����ּ���." << endl;
	while (true) {
		bool chk = false;
		string s;
		cout << "�ܾ�>> ";
		getline(cin, s);
		if (s == "exit") break;
		for (int i = 0; i < wordVector.size(); i++) {
			if (wordVector[i].find(s) == 0) {
				cout << wordVector[i] << endl;
				chk = true;
			}
		}
		if (chk == false) cout << "�߰��� �� ����" << endl;
	}
}
int main() {
	Words w;
	w.run();

}