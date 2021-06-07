//���� Converter class�� ��ӹ޾� ����ϴ� 1,2���� �� ���Ͽ� �ۼ��Ͽ���.

#include <iostream>
using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0;
	virtual string getSourceString() = 0;
	virtual string getDestString() = 0;
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};

class WonToDollor :public Converter {
protected:
	virtual double convert(double src) { return src / ratio; }
	virtual string getSourceString() { return "��"; }
	virtual string getDestString() { return "�޷�"; }
public:
	WonToDollor(double ratio) :Converter(ratio) {}
};

class KmToMile :public Converter {
protected:
	virtual double convert(double src) { return src / ratio; }
	virtual string getSourceString() { return "Km"; }
	virtual string getDestString() { return "Mile"; }
public:
	KmToMile(double ratio) :Converter(ratio) {}
};

/* ���� 1���� main �Լ�
int main() {
	WonToDollor wd(1010);
	wd.run();
} */

// ���� 2���� main �Լ�
int main() {
	KmToMile toMile(1.609344);
	toMile.run();
}