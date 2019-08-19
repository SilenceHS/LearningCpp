#include <iostream>
using namespace std;
union Person{
    int psw;
    double d;
};
int main(){
  Person person;
  person.psw=110;
  cout<<person.psw<<endl;
  cout<<person.d<<endl;

  person.d=3.14;
  cout<<person.psw<<endl;
  cout<<person.d<<endl;

}
