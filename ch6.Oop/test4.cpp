#include <iostream>
using namespace std;
class BaseClass{
public:
    void output(BaseClass base){
        cout<<name<<endl;
        cout<<base.name<<endl;
    }
    BaseClass(string name){
        this->name=name;
    }
private:
    string name;
};


class SubClassA:public BaseClass{
public:
    SubClassA(string name):BaseClass(name){}
};

class SubClassB:public BaseClass{
public:
    SubClassB(string name):BaseClass(name){}
};

int main()
{
    SubClassA subA("AA");
    SubClassB subB("BB");
    subA.output(subB);
}