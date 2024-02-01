#include<iostream>
using namespace std;
class City
{
    public:
    void place(int a)
    {
        cout<<"Kavitam"<<endl;
    }
    void place(int a , float b){
        cout<<"Palakollu"<<endl;
    }
    void place(float a, int b, char c){
        cout<<"Bhimavaram"<<endl;
    }
};
int main(){
    City c;
    c.place(1);
    c.place(1,2.2f);
    c.place(1,2,'3');
}