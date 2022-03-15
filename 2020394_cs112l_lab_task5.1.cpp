#include <iostream>
using namespace std;

class heater {
private:
	int defaulttemp;
	int warm;

public:
	heater() {
		defaulttemp = 15;
		
	}
	void warmer() {
		defaulttemp = defaulttemp + 5;
		cout << "Teampreature = " << defaulttemp << endl;
	}

	void cooler() {
		defaulttemp = defaulttemp - 5;
		cout << "Teampreature = " << defaulttemp << endl;
	}

	int get() {
		return defaulttemp;
	}

	~heater(){}


};

int main() {
	heater ob;

	char value;

	cout << "current tempreature is " << ob.get() << endl;
	cout << "Enter H to Increase the tempreature, C to cool or X to leave " << endl;
	cin >> value;

	
	while (value != 'X') {
		switch (value) {
		case 'H': {
			ob.warmer();

			cout << "Enter H to Increase the tempreature, C to cool or X to leave " << endl;
			cin >> value;

			break;
		}
		case 'C': {
			ob.cooler();

			cout << "Enter H to Increase the tempreature, C to cool or X to leave " << endl;
			cin >> value;

			break;
		}
		case 'X': {

			break;
		}
		default: {
			cout << "invalid value " << endl;

			cout << "Enter H to Increase the tempreature, C to cool or X to leave " << endl;
			cin >> value;


		}
		}
	}


	
}