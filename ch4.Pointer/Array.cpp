#include <iostream>
using namespace std;
int main()
{
	int a[5][5];
	int count = 0;
	for (int i = 0; i < 5; i++)
		for (int k = 0; k < 5; k++)
			a[i][k] = count++;
	for (int i = 0; i < 5; i++)
	{
		for (int k = 0; k < 5; k++)
			cout << a[i][k] << " ";
		cout << endl<<endl;
	}
	cout << a << endl;
	cout << *a << endl;
	cout << **a << endl;
	cout << *a+1 << endl;
	cout << *(*a + 1) << endl;
	cout << **(a+1) << endl;
}
