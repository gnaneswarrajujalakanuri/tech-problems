#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream myfile;
    myfile.open("Example.txt");
    myfile<<"Creating a file";
    myfile.close();
    return 0;
}