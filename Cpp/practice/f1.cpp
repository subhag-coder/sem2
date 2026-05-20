#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;
int main(){
    string data;
    
    ifstream fin("file1.txt");
    ofstream fout("file2.txt", ios::app);
    if(!fin){
        cout<<"Error in reading file!"<<endl;
    }    exit(0);
    if(!fout){
        cout<<"Error in writing to file!";
        exit(0);
    }
    while(getline(fin,data)){
        fout<<data<<endl;
    }
    cout<<"\nData transferred to file. \nOpen file to check. \n";

    fin.close();
    fout.close();
    return 0;
}