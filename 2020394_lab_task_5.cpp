#include <iostream>
using namespace std;

class pairity {
public:
	int x;
	int counter;
	int* a = new int[x];


	pairity() {
		x = 0;
		counter = 0;
	}
	void addvalues(int max) {
		counter;

		x = max + x;

		int* b = new int[x];

		for (int i = 0; i < x; i++) {
			b[i] = a[i];
		}

		delete[]a;
		a = b;

		cout << "enter new values " << endl;

		for (int i = counter; i < x; i++) {
			cin >> a[i];
		}

		counter = counter + x;
	}

	void deletevalue(int num) {
		x = num - 1;
		counter = counter - 1;
		int* b = new int[x];

		for (int i = 0; i < x; i++) {
			b[i] = a[i];
		}

		delete[]a;
		a = b;

		
	}

	void printall() {
		for (int i = 0; i < x; i++) {
			cout << a[i] << endl;
		}
	}

	int boolval(int valuetocheck) {
		if (valuetocheck % 2 == 0) {
			return 1;
		}
		if (valuetocheck % 2 == 1) {
			return 0;
		}
	}


private:


};

void menu() {
	string men[4] = { "1)input value ","2)print values ", "3)delete previous value","4)check for even or odd number of inputs" };
	for (int i = 0; i < 4; i++) {
		cout << men[i] << endl;
	}
}



int main() {

	int initialval;
	int length;

	pairity obj;


	cout << "enter value from the menu " << endl;
	menu();
	cin >> initialval;

	while (initialval != -1) {
		switch (initialval) {

		case 1:
			cout << "kindly enter the length of the array you want to build" << endl;
			cin >> length;

			obj.addvalues(length);

			cout << "enter value from the menu " << endl;
			menu();
			cin >> initialval;

			break;


		case 2:

			obj.printall();

			cout << "enter value from the menu " << endl;
			menu();
			cin >> initialval;

			break;

		case 3:

			obj.deletevalue(obj.x);

			cout << "enter value from the menu " << endl;
			menu();
			cin >> initialval;

			break;

		case 4:
			cout << obj.boolval(obj.x) << endl;

			cout << "enter value from the menu " << endl;
			menu();
			cin >> initialval;

			break;

		default:

			cout << "enter value from the menu " << endl;
			menu();
			cin >> initialval;

			break;
		}

	}








}