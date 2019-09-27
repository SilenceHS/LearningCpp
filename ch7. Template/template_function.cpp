#include <iostream>
#include<typeinfo>
using namespace std;
template <typename T>
void Swap(T &a,T &b)
{
    cout<<"this is template"<<endl;
    T temp=a;
    a=b;
    b=temp;
}
void Swap(int &a,double &b)
{
    cout<<"this is normal function"<<endl;
    double temp=b;
    b=a;
    a=temp;
}
int main()
{
    int a=1;
    double b=3.5;
    Swap(a,b);
    cout<<a<<" "<<b<<endl;

    string aa="abc";
    string bb="def";
    Swap(aa,bb);
    cout<<aa<<" "<<bb<<endl;
}