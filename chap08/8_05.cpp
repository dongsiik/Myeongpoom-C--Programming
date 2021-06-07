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

class MyQueue :public BaseArray {
private:
	int size;
	int start;
	int end;
public:
	MyQueue(int capacity = 100) :BaseArray(capacity) {
		size = 0;
		start = 0;
		end = 0;
	}
	int capacity() { return getCapacity(); }
	int length() { return size; }
	void enqueue(int n) {
		if (size == capacity()) return;
		put(start, n);
		size++;
		start++;
		start = start % capacity();
	}
	int dequeue() {
		if (size == 0) return -1;
		int tmp = get(end);
		size--;
		end++;
		end = end % capacity();
		return tmp;
	}
};

int main() {
	MyQueue mQ(100);
	int n;
	cout << "ť�� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mQ.enqueue(n);
	}
	cout << "ť�� �뷮:" << mQ.capacity() << ", ť�� ũ��:" << mQ.length() << endl;
	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' ';
	}
	cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;
}

