#include <iostream>
using namespace std;

template <class T>
bool search(T wanted, T target[], int size) {
	bool tf = false;
	for (int i = 0; i < size; i++) {
		if (wanted == target[i]) {
			tf = true;
			break;
		}
	}
	return tf;
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	if (search(100, x, 5)) cout << "100�� �迭 x�� ���ԵǾ� �ִ�" << endl;
	else cout << "100�� �迭 x�� ���ԵǾ� ���� �ʴ�" << endl;

	double y[] = { 1.1, 2.2, 3.3, 4.4 };
	if (search(1.0, y, 4)) cout << "1.0�� �迭 y�� ���ԵǾ� �ִ�" << endl;
	else cout << "1.0�� �迭 y�� ���ԵǾ� ���� �ʴ�" << endl;
}