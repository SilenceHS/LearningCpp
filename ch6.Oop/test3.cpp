#include <iostream>
using namespace std;
class BaseClass{
public:   
    BaseClass(string name);
    void BaseFunction();
    ~BaseClass();
protected:
    string name; 
};
class SubClass :public BaseClass{
public:
    void SaySomething();
    SubClass(string name,int id);
    void BaseFunction(int a);
    void add(int a,int b);
    void add(int a,int b,int c);

    ~SubClass();
protected:
    int id;
};
BaseClass::BaseClass(string name){
    cout<<"this is the constructor of BaseClass"<<endl;
    this->name=name;
}
BaseClass::~BaseClass(){
    cout<<"this is the destructor of BaseClass"<<endl;
}
void BaseClass::BaseFunction(){
    cout<<"I am base function"<<endl;
}
SubClass :: SubClass(string name,int id ):BaseClass(name){
    cout<<"this is the constructor of SubClass"<<endl;
    this->id=id;
}
void SubClass::BaseFunction(int a){
    BaseClass::BaseFunction();
    cout<<"I am override function"<<endl;
}
SubClass::~SubClass(){
    cout<<"this is the destructor of SubClass"<<endl;
}
void SubClass::SaySomething(){
    cout<<"my name is ";
    cout<<name<<endl;
    cout<<"my id is ";
    cout<<id<<endl;
}
void SubClass::add(int a,int b){
    cout<<a+b<<endl;
}
void SubClass::add(int a,int b,int c){
    cout<<a+b+c<<endl;
}
int main()
{
    string name="sb";
    int id=110;
    SubClass subclass(name,id);
    //subclass.BaseFunction();//error
    subclass.BaseFunction(123); 
    subclass.add(1,2);
    subclass.add(1,2,3);
    return 0;
}