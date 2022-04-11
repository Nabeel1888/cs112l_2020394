#include <iostream>
using namespace std;


class person {
private:
	string name;
	int id;
	static int counter;

public:
	person() {
		id = 0;
	}

	friend istream& operator>>(istream& input, person& D) {
		input >> D.name >> D.id;
		return input;
	}

	friend ostream& operator<<(ostream& output, person& x) {
		output << x.name;
		return output;
	}

};

int person::counter = 0;

class date {
private:
	int year;
	int month;
	int day;



public:
	date() {
		year = 0;
		month = 0;
		day = 0;
	}

	friend istream& operator>>(istream& input, date& y) {
		input >> y.year >> y.month >> y.day;
		return input;
	}

	friend ostream& operator<<(ostream& output, date& x) {
		output << x.year;
		return output;
	}

	bool operator>(date d) {
		if (year > d.year) {
			return true;
		}
		else {
			return false;
		}
	}
	bool operator<(date d) {
		if (year < d.year) {
			return true;
		}
		else {
			return false;
		}
	}

};



int main() {


	person c1;
	cout << "kindly enter name and ID of person " << endl;
	cin >> c1;
	date x;
	cout << "Kindly enter date of joining" << endl;
	cin >> x;

	person c2;
	cout << "kindly enter name and ID of person " << endl;
	cin >> c2;
	date y;
	cout << "Kindly enter date of joining " << endl;
	cin >> y;

	if (x > y) {
		cout << c1 << " is senior to " << c2 << " since " << x << " is greater than " << y << endl;
	}
	else if (x < y) {
		cout << c2 << " is senior to " << c1 << " since " << y << " is greater than " << x << endl;
	}
}