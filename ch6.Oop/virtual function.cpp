#include <iostream>
using namespace std;
class Base {
public:
	Base() {}
	virtual void out() {
		cout << "this is BaseClass" << endl;
	}
};
class Sub :public Base {
public:
	Sub() {}
	void out() {
		cout << "this is SubClass" << endl;
	}
};
void printClass(Base bb)
{
	bb.out();
}

void printClass2(Base &bb)
{
	bb.out();
}
int main()
{
	Base* base=new Sub();
	base->out(); 
	printClass(*base);
	printClass2(*base);
}
