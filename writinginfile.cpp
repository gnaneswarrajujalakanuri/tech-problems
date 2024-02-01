#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file;
    file.open ("Example.txt",ios :: trunc);
    if(!file.is_open)
}