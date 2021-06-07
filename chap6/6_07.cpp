#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
	static void seed() { srand((unsigned int)time(0)); }
	static int nextInt(int min = 0, int max = 32767);
	static char nextAlphabet();
	static double nextDouble();
};

int Random::nextInt(int min, int max) {
	return rand() % (max - min + 1);
}

char Random::nextAlphabet() {
	return 'A' + rand() % 26;
}

double Random::nextDouble() {
	return (double)rand() / 32767;
}

int main() {
	Random::seed();
	cout << "1���� 100������ ������ ���� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++) cout << Random::nextInt(1, 100) << ' ';
	cout << endl;
	cout << "���ĺ��� �����ϰ� 10�� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++) cout << Random::nextAlphabet() << ' ';
	cout << endl;
	cout << "������ �Ǽ��� 10�� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++) cout <<(double) Random::nextDouble() << ' ';
	cout << endl;
	return 0;
}