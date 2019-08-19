#include <iostream>
using namespace std;
void swap1(int* a, int* b);
void swap2(int &a, int &b);
int main(){
    int a=10;
    int b=20;
    swap2(a,b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    //swap2()
}
void swap1(int* a, int* b){
    *a ^=*b;
    *b ^=*a;
    *a ^=*b;
}
void swap2(int &a, int &b){
   a ^=b;
   b ^=a;
   a ^=b;
}
