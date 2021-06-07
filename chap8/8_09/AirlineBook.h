#ifndef AIRLINEBOOK_H
#define AIRLINEBOOK_H

#include "Console.h"

class Seat {
private:
	string name;
public:
	Seat() { name = "---"; }
	void reserve(string name) {
		if (this->name == "---")	this->name = name;
		else cout << "�̹� ����� �¼��Դϴ�." << endl;
	}
	void cancel(string name) {
		if (this->name==name) this->name = "---";
		else cout << "�̹� �� �¼��̰ų� ����� �̸��� �ٸ��ϴ�." << endl;
	}
	string getName() { return name; }
};

class Schedule {
private:
	Seat* seat;
	string time;
public:
	Schedule() { seat = new Seat[8]; time = ""; }
	~Schedule() { delete[] seat; }
	void setTime(string time) { this->time = time; }
	void show();
	void reserve(int seatNum, string name);
	void cancel(int seatNum, string name);
};

class AirlineBook {
private:
	Schedule* schedule;
public:
	AirlineBook() {
		schedule = new Schedule[3];
		schedule[0].setTime("07��");
		schedule[1].setTime("12��");
		schedule[2].setTime("17��");
	}
	~AirlineBook() { delete[] schedule; }
	void run();
};

#endif