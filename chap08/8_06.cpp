#include <iostream>
using namespace std;

class BaseArray {
private:
	int capacity;
	int* mem;
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity;
		mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyStack :public BaseArray {
private:
	int size;
	int start;
public:
	MyStack(int capacity = 100) :BaseArray(capacity) {
		size = 0;
		start = 0;
	}
	int capacity() { return getCapacity(); }
	int length() { return size; }
	void push(int n) {
		if (size == capacity()) return;
		put(start, n);
		size++;
		start++;
		start = start % capacity();
	}
	int pop() {
		if (size == 0) return -1;
		int tmp = get(start - 1);
		size--;
		start--;
		return tmp;
	}
};

int main() {
	MyStack mStack(100);
	int n;
	cout << "���ÿ� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mStack.push(n);
	}
	cout << "������ �뷮:" << mStack.capacity() << ", ������ ũ��:" << mStack.length() << endl;
	cout << "������ ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
	while (mStack.length() != 0) {
		cout << mStack.pop() << ' ';
	}
	cout << endl << "������ ���� ũ�� : " << mStack.length() << endl;
}

