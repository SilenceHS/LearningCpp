#include <iostream>
using namespace std;
int main(){
    enum Weekday{Monday,Tuesday,Wedsday};
    Weekday today;
    today=Tuesday;
    cout<<today<<endl;
    switch (today)
    {
    case Monday:
    cout<<"today is Monday"<<endl;
        break;
    
    case Tuesday:
        cout<<"today is Tuesday"<<endl;
        break;
    default:
        break;
    }
}
