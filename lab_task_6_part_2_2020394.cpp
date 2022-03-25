#include <iostream>
using namespace std;

class info {
private:
	static int counter;
	int id;
	string name;
	int options;
	string rank;

public:
	void get();

		
};

int info::counter = 0;

void display() {
	cout << "please select the desired options " << endl;
	cout << "1) enter id of officers " << endl;
	cout << "2) get number of officers " << endl;
	cout << "3) enter 3 to exit " << endl;
}

void info::get() {

	display();
	cin >> options;

	while (options != 3) {

		if (options == 1) {

			cout << "enter id of officer " << endl;
			cin >> id;
			cout << "enter name of officer " << endl;
			cin >> name;
			cout << "enter rank of officer " << endl;
			cin >> rank;

			counter = counter + 1;

			display();
			cin >> options;


		}
		else if (options == 2) {

			cout << "the total number of officers who have entered are " << counter << endl;
			display();
			cin >> options;
		}
		else if (options == 3) {

		}

		else {
			cout << "invalid option enter new value " << endl;
			cin >> options;
		}
	}
}

int main() {
	info c1;
	c1.get();
}
