#include <iostream>
using namespace std;
class BaseClass{
public:   
    BaseClass(string name);
    ~BaseClass();
protected:
    string name; 
};
class SubClass :public BaseClass{
public:
    void SaySomething();
    SubClass(string name,int id);
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
SubClass :: SubClass(string name,int id ):BaseClass(name){
    cout<<"this is the constructor of SubClass"<<endl;
    this->id=id;
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
int main()
{
    string name="sb";
    int id=110;
    SubClass subclass(name,id);
    subclass.SaySomething();
    return 0;
}