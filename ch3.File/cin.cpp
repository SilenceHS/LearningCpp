#include <iostream>
using namespace std;
int main(){
    int a;
    int sum=0;
    while(cin>>a){//ctrl+d to break the loop
        sum+=a;
    }
    cout<<sum;
}