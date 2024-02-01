#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string line;
    fstream myfile("Example.txt");
    if(myfile.is_open())
    {
        while(getline(myfile,line))
        {
            cout<<line<<endl;
        }
        myfile.close();
    }
    else{
        cout<<"Unable to find the file";
    }
}