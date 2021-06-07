#include <iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0;
	virtual bool pop(int& n) = 0;
	virtual int size() = 0;
};

class IntStack :public AbstractStack {
private:
	int* mem;
	int length;
	int capacity;
public:
	IntStack(int capacity = 100) {
		mem = new int[capacity];
		this->capacity = capacity;
		length = 0;
	}
	~IntStack() { delete[] mem; }
	virtual bool push(int n);
	virtual bool pop(int& n);
	virtual int size() { return length; }
	int getCapacity() { return capacity; }
};

bool IntStack::push(int n) {
	if (length == capacity) return false;
	else {
		mem[length] = n;
		length++;
		return true;
	}
}

bool IntStack::pop(int& n) {
	if (length == 0) return false;
	else {
		length--;
		n = mem[length];
		return true;
	}
}

int main() {
	IntStack iStack(100);
	int n;
	cout << "���ÿ� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		iStack.push(n);
	}
	cout << "������ �뷮:" << iStack.getCapacity() << ", ������ ũ��:" << iStack.size() << endl;
	cout << "������ ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
	while (iStack.pop(n) != false) {
		cout << n << ' ';
	}
	cout << endl << "������ ���� ũ�� : " << iStack.size() << endl;
}