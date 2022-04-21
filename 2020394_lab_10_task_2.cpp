#include <iostream>
using namespace std;

class father {
private:
public:
	virtual void set() {
		cout << " kindly enter name " << name << endl;
		cin >> name;
		cout << "Kindly enter eyer color " << eyecolor << endl;
		cin >> eyecolor;
		cout << "Kindly enter haircolor " << haircolor << endl;
		cin >> haircolor;
	}
	virtual string get_name() {
		return name;
	}
	virtual string get_eyecolor() {
		return eyecolor;
	}
	virtual string get_haircolor() {
		return haircolor;
	}
protected:
	string name;
	string eyecolor;
	string haircolor;

};
class mom {
private:
public:
	void set() {
		cout << " kindly enter name " << name << endl;
		cin >> name;
		cout << "Kindly enter eyer color " << eyecolor << endl;
		cin >> eyecolor;
		cout << "Kindly enter haircolor " << haircolor << endl;
		cin >> haircolor;
	}
	virtual string get_name() {
		return name;
	}
	virtual string get_eyecolor() {
		return eyecolor;
	}
	virtual string get_haircolor() {
		return haircolor;
	}
protected:
	string name;
	string eyecolor;
	string haircolor;
};

class myself:public father {
private:
public:
	void set() {
		cout << " kindly enter name " << name << endl;
		cin >> name;
		cout << "Kindly enter eyer color " << eyecolor << endl;
		cin >> eyecolor;
		cout << "Kindly enter haircolor " << haircolor << endl;
		cin >> haircolor;
		cout << "kindly enter education level" << endl;
		cin >> education;
		cout << "kindly enter age " << endl;
		cin >> age;
	}
	 string get_name() {
		return name;
	}
	 string get_eyecolor() {
		return eyecolor;
	}
	 string get_haircolor() {
		return haircolor;
	}
	 string get_education() {
		 return education;
	 }
	 int get_age() {
		 return age;
	 }
protected:
	string name;
	string eyecolor;
	string haircolor;
	string education;
	int age;
};

class mysis :public father,public mom {
private:
public:
	void set() {
		cout << " kindly enter name " << name << endl;
		cin >> name;
		cout << "Kindly enter eyer color " << eyecolor << endl;
		cin >> eyecolor;
		cout << "Kindly enter haircolor " << haircolor << endl;
		cin >> haircolor;
		cout << "kindly enter education level" << endl;
		cin >> education;
		cout << "kindly enter age " << endl;
		cin >> age;
	}
	string get_name() {
		return name;
	}
	string get_eyecolor() {
		return eyecolor;
	}
	string get_haircolor() {
		return haircolor;
	}
	string get_education() {
		return education;
	}
	int get_age() {
		return age;
	}
protected:
	string name;
	string eyecolor;
	string haircolor;
	string education;
	int age;
};

int main() {

}