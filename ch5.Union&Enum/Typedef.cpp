#include <iostream>
using namespace std;
typedef int * intPointer;
int main(){
    int a=10;
    cout<<a<<endl;
    intPointer ap;
    ap=&a;
    *ap=20;
    cout<<a<<endl;
}