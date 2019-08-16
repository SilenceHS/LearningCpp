#include <iostream>
using namespace std;
int main(){
    cout<<"please input xxx.x C or xxx.x F  to change the temperature"<<endl;
    float temp;
    string unit;
        cin>>temp;
        cin>>unit;
        if(unit[0]=='C')
            cout<<temp*1.8+32<<" F"<<endl;
        else if(unit[0]=='F')
            cout<<(temp-32)/1.8<<" C"<<endl;
        else
        {
            cout<<"input error"<<endl;
        }
        
}