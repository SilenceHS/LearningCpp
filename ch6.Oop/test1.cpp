#include <iostream>
using namespace std;
class Animal{
public:
    void eat();
    void sleep();
};
class Pig:public Animal{
public:
    void climb();
};
class Bird:public Animal{
public:
    void fly();
};

void Animal::eat(){
    cout<<"I am eating"<<endl;
}
void Animal::sleep(){
    cout<<"I am sleeping, do not bother me"<<endl;
}
void Pig::climb(){
    cout<<"I am a pig, I am climbing"<<endl;
}
void Bird::fly(){
    cout<<"I am a bird, I am flying"<<endl;
}
int main(){
    Pig pig;
    pig.eat();
    pig.climb();
    pig.sleep();

    Bird bird;
    bird.eat();
    bird.fly();
    bird.sleep();
    return 0;
}