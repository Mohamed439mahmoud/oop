// ConsoleApplication106.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
class person {
private:
	string name;
	int age;
	string email;
public:
	void setvalue(string n, int a, string e) {

		 name = n;
		age = a;
		 email = e;
	}
	void print() {
		cout << name << "\t" << age << "\t" << email;
	}
};
class student {
private:
	int grad;
public:
	void value(int g) {
		grad = g;
	}
	void print() {
		cout << "\t" << grad;
	}
};
int main()
{
	person ob1;
	ob1.setvalue("mohamed", 22, "moamed@gamil.come");
	ob1.print();
	student ob2;
	ob2.value(30);
	ob2.print();
}

