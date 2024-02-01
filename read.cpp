#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream myfile("Example.txt");
    if(!myfile.is_open())
    {
        cout<<"Error"<<endl;
    }
    else{
        cout<<myfile.tellg();
        string line;
        myfile.seekg(5);
        getline(myfile,line);
        cout<<line<<endl;
    }
}