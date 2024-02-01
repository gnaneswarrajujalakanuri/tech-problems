// #include<iostream>
// #define num 100
// using namespace std;
// int main(){
//     #ifdef Pi
//         cout<<"The pi is defined"<<endl;
//     #elif  num
//     cout<<"the num is defined and the value is "<<num<<endl;
//     #else
//     cout<<"nothing is defined"<<endl;
//     #endif
// }

///////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
int main(){
    cout<<"c++ compiler version"<<__cplusplus;
    cout<<"\nDate: "<<__DATE__;
    cout<<"\nTime is:"<<__TIME__;
    cout<<"\nLine Number is: "<<__LINE__;
}