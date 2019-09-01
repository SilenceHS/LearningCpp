#include <iostream>
using namespace std;
class Lover{
public:
    Lover(string name);
    void kiss(Lover lover);
private:
    string name;
    friend class Other;
};


class Boy:public Lover{
public :
    Boy(string name);
};


class Girl:public Lover{
public:
    Girl(string name);

};
class Other{
public:
    void kiss(Girl girl)
    {
        cout<<"other kissed "<<girl.name;
    }
private:
    string name;
};

Boy::Boy(string name):Lover(name){
}

Girl::Girl(string name):Lover(name){
}

Lover::Lover(string name)
{
    this->name=name;
}

void Lover::kiss(Lover girl){
    cout<<this->name<<" kissed "<<girl.name<<endl;
}

int main()
{
    Boy boy("sb110");
    Girl girl("ss");
    boy.kiss(girl);
    Other other;
    other.kiss(girl);
}