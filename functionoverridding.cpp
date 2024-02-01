#include<iostream>
using namespace std;
class Base{
    public:
    virtual void disp(){
        cout<<"Executing Base class"<<endl;
    }
};
class Derived: public Base{
    public:
    void disp(){
        cout<<"Executing Derived class"<<endl;
    }
};
int main(){
    Derived d;
    Base *b = &d;
    b->disp();
}