// ConsoleApplication110.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
class dontworry {
private:
	int x = 0;
public:
	void getvalue() {
		cout << "please enter x\n";
		cin >> x;
	}
	void compare(dontworry ob1, dontworry ob2) {
		if (ob1.x==ob2.x){
			cout << ob1.x << "=" << ob2.x;
		}
		else
		{
			cout << ob1.x << "!=" << ob2.x;
		}
	}
};
int main()
{
	dontworry ob1;
	dontworry ob2;
	ob1.getvalue();
	ob2.getvalue();
	ob2.compare(ob1, ob2);
}
