#include <iostream>
#include <cstring>
using namespace std;
//a = 97
int main() {
	char buf[10001];
	int alpha[26] = { 0 };
	int total = 0;

	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n�ؽ�Ʈ�� ���� ;�Դϴ�. 10000������ �����մϴ�.\n";
	cin.getline(buf, 10001, ';');
	for (unsigned int i = 0; i < strlen(buf); i++) {
		if (isalpha(buf[i])) {
			buf[i] = tolower(buf[i]);
			alpha[int(buf[i]-97)]++;
			total++;
		}
	}
	cout << "�� ���ĺ� �� " << total << "\n\n";

	for (int i = 0; i < 26; i++) {
		cout << (char)(i + 97) << " (" << alpha[i] << ")\t: ";
		for (int j = 0; j < alpha[i]; j++) cout << '*';
		cout << "\n";
	}
	return 0;
}

/*
Wise men say, only fools rush in
But I can't help, falling in love with you

Shall I stay? Would it be a sin?
If I can't help, falling in love with you

Like a river flows, surely to the sea
Darling so it goes, some things aren't meant to be ;
*/