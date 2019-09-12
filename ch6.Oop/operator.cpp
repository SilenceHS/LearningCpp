#include <iostream>
using namespace std;
class complexNumber {
public:
	complexNumber(int r,int i) {
		real = r;
		imaginary = i;
	}
	int real;
	int imaginary;
	void output() {
		cout << "(" << real << "," << imaginary << "i)" << endl;
	}
	complexNumber operator +(complexNumber *b) {
		complexNumber n(this->real+b->real, this->imaginary + b->imaginary);
		return n;
	}
};
int main()
{
	complexNumber *a=new complexNumber(1, 2);
	complexNumber *b= new complexNumber(2, -3);
	((*a) + b).output();
}
