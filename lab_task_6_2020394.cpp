#include <iostream>
using namespace std;



class person {
private:
	char comp[10];
	string uniname;
	friend class coordinator;

public:
	
};

class coordinator {
private:
	int i;
	int j;
public:

	person student1;
	person student2;

	coordinator () {
		i = 0;
		j = 0;
	}
	

	void getvalue() {


		cout << "kindly enter the competition and university name " << endl;
		cin >> student1.comp;
		cin >> student1.uniname;

		cout << "kindly enter the competiotion and university name " << endl;
		cin >> student2.comp;
		cin >> student2.uniname;

		if (student1.uniname == student2.uniname) {

			while (student1.comp[i] != NULL) {
				i++;
			}

			while (student2.comp[j] != NULL) {
				j++;
			}

			if (i > j) {
				cout << "message from coordinator person 1 and person 2 are roomates their room number is " << i << endl;
			}

			if (j > i) {
				cout << "message from coordinator person 1 and person 2 are roomates their room number is " << j << endl;
			}
			if (i == j) {
				cout << "message from coordinator person 1 and person 2 are roomates their room number is " << i << endl;
			}
		}
		else {
			cout << "message from coordinator person 1 and person 2 are not roomates "<< endl;
		}
		
	}
};


int main() {
	
	coordinator object1;

	object1.getvalue();


}