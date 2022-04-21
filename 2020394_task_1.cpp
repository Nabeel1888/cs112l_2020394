#include <iostream>
using namespace std;

class vehicle {
private:
public:
	vehicle() {
		notires = 0;
		noseats = 0;
	}

	virtual void set() {
		cout << "kindly enter number of tires" << endl;
		cin >> notires;

		cout << "kindly enter number of seats" << endl;
		cin >> noseats;

	}

	virtual void display() {
		cout << "No of seats are " << noseats << endl;
		cout << "No of tires are " << endl;
	}

	virtual int get_tire() {
		return notires;
	}
	virtual int get_seat() {
		return noseats;
	}
	virtual string get_color() {
		return color;
	}
	virtual string get_plateno() {
		return plateno;
	}
	string get_model() {
		return model;
	}

	
protected:
	int notires;
	int noseats;
	string color;
	string plateno;
	string model;
};

class car :public vehicle {
private:
public:
	car () {
		notires = 0;
		noseats = 0;
		

	}
	void set() {
		cout << "kindly enter number of tires" << endl;
		cin >> notires;

		cout << "kindly enter number of seats" << endl;
		cin >> noseats;

		cout << "kindly enter car color" << endl;
		cin >> color;
	}
	void display() {
		cout << "No of seats are " << noseats << endl;
		cout << "No of tires are " << endl;
		cout << "Color of car is " << color << endl;
	}
	int get_tire() {
		return notires;
	}
	int get_seat() {
		return noseats;
	}
	 string get_color() {
		return color;
	}
protected:
	int notires;
	int noseats;
	string color;
};

class vitz :public car {
private:
public:
	vitz() {
		notires = 0;
		noseats = 0;


	}
	void set() {
		cout << "kindly enter number of tires" << endl;
		cin >> notires;

		cout << "kindly enter number of seats" << endl;
		cin >> noseats;

		cout << "kindly enter car color" << endl;
		cin >> color;

		cout << "Kindly enetr model number" << endl;
		cin >> model;

		cout << "Kindly enter plate number " << endl;
		cin >> plateno;

	}
	void display() {
		cout << "No of seats are " << noseats << endl;
		cout << "No of tires are " <<notires<< endl;
		cout << "Color of car is " << color << endl;
		cout << "Model number is " << model << endl;
		cout << "plate no is " << plateno<<endl;
	}
	int get_tire() {
		return notires;
	}
	int get_seat() {
		return noseats;
	}
	string get_color() {
		return color;
	}
	 string get_model() {
		return model;
	}
	 string get_plateno() {
		return plateno;
	}
protected:
	int notires;
	int noseats;
	string color;
	string model;
	string plateno;

};

int main() {
	vehicle *pointer;

	vitz dream;

	pointer = &dream;

	



	
	
}