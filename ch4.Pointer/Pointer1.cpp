#include <iostream>
using namespace std;
int main(){
    int a=123;
    string b="SilenceHS";
    int* aPointer=&a;
    string* bPointer=&b;
    cout<<*aPointer<<endl;
    cout<<"hello,"<<*bPointer<<endl;
    return 0;
}