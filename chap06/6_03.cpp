#include <iostream>
using namespace std;

int big(int a, int b) {
	int bigInt = (a > b ? a : b);
	return (bigInt > 100 ? 100 : bigInt);
}

int big(int a, int b, int max) {
	int bigInt = (a > b ? a : b);
	return (bigInt > max ? max : bigInt);
}
/* ����Ʈ �Ű������� �Ӥ����ϴ� (2)�� �ش�
int big(int a, int b, int max=100) {
	int bigInt = (a > b ? a : b);
	return (bigInt > max ? max : bigInt);
}
*/
int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
	return 0;
}