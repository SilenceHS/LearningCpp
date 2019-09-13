#include <iostream>
using namespace std;
class Base {
public:
	void output() {
		cout << "this is Base" << endl;
	}
};
class Sub:public Base {
public:
	void output() {
		cout << "this is Sub" << endl;
	}
};

int main()
{
	Base* base = new Sub;
	Sub* sub = (Sub*)base;
	sub->output();
}
