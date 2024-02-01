#include<iostream>
using namespace std;
class LoginFacebook
{
    public:
    void Login(int a, int OTP)
    {
        cout<<"Kavitam"<<endl; 
    }
    void Login(string a, float b){
        cout<<"Palakollu"<<endl;
    }
    void Login(string username, int b){
        cout<<"Bhimavaram"<<endl;
    }
};
int main(){
    LoginFacebook L;
    L.Login(1,34);
    L.Login("string1",2.5f);
    L.Login("your_name",2);
}