#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size);
	static int* remove(int s1[], int s2[], int size, int& retSize);
};

int* ArrayUtility2::concat(int s1[], int s2[], int size){
	int* newArray = new int[2 * size];
	for (int i = 0; i < size; i++)	newArray[i] = s1[i];
	for (int i = 0; i < size; i++)	newArray[i + size] = s2[i];
	return newArray;
}

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {
	int cnt = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (s1[i] == s2[j]) {
				cnt++;
				s1[i] = -999999999;
				break;
			}
		}
	}
	retSize = size - cnt;
	int* newArray = new int[retSize];
	int j = 0;
	for (int i = 0; i < size; i++) {
		if (s1[i] != -999999999) {
			newArray[j] = s1[i];
			j++;
		}
	}
	return newArray;
}

int main() {
	int x[5];
	int y[5];
	int retSize = 0;
	cout << "������ 5 �� �Է��϶�. �迭 x�� �����Ѵ�>>";
	for (int i = 0; i < 5; i++) cin >> x[i];
	cout << "������ 5 �� �Է��϶�. �迭 y�� �����Ѵ�>>";
	for (int i = 0; i < 5; i++) cin >> y[i];
	cout << "��ģ ���� �迭�� ����Ѵ�" << endl;
	int* z = ArrayUtility2::concat(x, y, 5);
	for (int i = 0; i < 10; i++) cout << z[i]<<' ';
	cout << endl;
	int* w = ArrayUtility2::remove(x, y, 5, retSize);
	cout << "�迭 x[]���� y[]�� �� ����� ����Ѵ�. ������ " << retSize << endl;
	for (int i = 0; i < retSize; i++)	cout << w[i] << ' ';
	return 0;
}