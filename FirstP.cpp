#include<iostream>
using namespace std;
class City
{
    public:
    void place(int a)
    {
        cout<<"Kavitam"<<endl; 
    }
    void place(int a , int b){
        cout<<"Palakollu"<<endl;
    }
    void place(int a, int b, int c){
        cout<<"Bhimavaram"<<endl;
    }
};
int main(){
    City c;
    c.place(1);
    c.place(1,2);
    c.place(1,2,3);
}