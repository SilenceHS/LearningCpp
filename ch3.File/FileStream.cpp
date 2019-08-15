#include <fstream>
#include <iostream>
using namespace std;
int main(){
    ifstream in;
    in.open("input.txt");
    if (!in)
    {
        cout<<"文件打开失败"<<endl;
        return 0;
    }
    string a;
    ofstream out;
    out.open("copy.txt");
    if (!out){
        cout<<"打开文件失败"<<endl;
        return 0;
    }
    while(in>>a)
    {
        out<<a;
    }      
    return 0;
}