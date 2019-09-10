#include <iostream>
using namespace std;
class Block{
    public:
    static int Blockcount;
    Block(){
        Blockcount++;
    }
};
int Block::Blockcount=0;


int main(){
    Block block;
    cout<<Block::Blockcount<<endl;
}