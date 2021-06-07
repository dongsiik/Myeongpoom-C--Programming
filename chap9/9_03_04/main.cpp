//���� LoopAdder class�� ��ӹ޾� ����ϴ� 3,4���� �Բ� �ۼ��Ͽ���.

#include <iostream>
#include <string>
#include "Adder.h"
using namespace std;


int main() {
	ForLoopAdder forLoop("for Loop");
	WhileLoopAdder whileLoop("While Loop");
	DoWhileLoopAdder doWhileLoop("Do while Loop");

	forLoop.run();
	whileLoop.run();
	doWhileLoop.run();
}