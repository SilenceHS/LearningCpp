#include <iostream>
using namespace std;
struct Person{
    string name;
    string id;
    char sex;
};
int main(){
    Person person={"SilenceHS","1",'F'};
    Person* pPointer=&person;
    cout<<"name:"<<pPointer->name<<endl;
    cout<<"id:"<<(*pPointer).id<<endl;
    cout<<"sex:"<<pPointer->sex<<endl;
    
    person.name="aaa";
    pPointer->id="123";
    (*pPointer).sex='M';
    cout<<"name:"<<pPointer->name<<endl;
    cout<<"id:"<<(*pPointer).id<<endl;
    cout<<"sex:"<<pPointer->sex<<endl;
}