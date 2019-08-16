#include <iostream>
using namespace std;
int main(){
    cout<<"Do you like SilenceHS(input y/n)"<<endl;
    string answer;
    cin>>answer;
    if(answer.length()!=1)
    {
        cout<<"input error"<<endl;
        return 0;
    }
    if (answer[0]=='y'||answer[0]=='Y')
    {
        cout<<"I love you too"<<endl;
    }
    else
    {
        cout<<"no, I am so sad"<<endl;
    }
    
}