#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Player {
private:
	string name;
public:
	Player() { name = ""; }
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};

class GamblingGame {
private:
	Player* p;
	int num;
public:
	GamblingGame() { p = new Player[2];  srand((unsigned int)(time(0))); num = 2; }
	~GamblingGame() { delete[] p; }
	bool roll(Player);
	void run();
};

bool GamblingGame::roll(Player p) {
	int ran[3];
	string dum = "";

	cout << p.getName() << ":<Enter>";
	getline(cin, dum);
	cout << dum;
	ran[0] = rand() % (num + 1);
	ran[1] = rand() % (num + 1);
	ran[2] = rand() % (num + 1);
	cout << "\t\t" << ran[0] << "\t" << ran[1] << "\t" << ran[2] << "\t";
	if (ran[0] == ran[1] && ran[1] == ran[2]) {
		cout << p.getName() << "�� �¸�!!" << endl;
		return true;
	}
	else {
		cout << "�ƽ�����!" << endl;
		return false;
	}
}

void GamblingGame::run() {
	string s;
	int i = 0;
	cout << "***** ���� ������ �����մϴ�. *****" << endl;
	cout << "ù��° ���� �̸�>>";
	cin >> s;
	p[0].setName(s);
	cout << "�ι�° ���� �̸�>>";
	cin >> s;
	p[1].setName(s);
	cin.ignore();

	while (true) {
		if (roll(p[i % 2]) == true) break;
		i++;
	}
}
int main() {
	GamblingGame gg;
	gg.run();
	return 0;
}