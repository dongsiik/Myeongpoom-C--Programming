#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char untilYes[100];
	do {
		cout << "�����ϰ� ������ yes�� �Է��ϼ���>>";
		cin.getline(untilYes, 100);

	} while (strcmp(untilYes, "yes"));
	cout << "�����մϴ�...";

	return 0;
}