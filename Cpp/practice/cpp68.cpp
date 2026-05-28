#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream fin;
    ofstream fout1, fout2;
    fin.open("file1.txt");
    fout1.open("file3.txt");
    fout2.open("file4.txt");
    string line;
    int n=1;
    while(getline(fin,line)){
        if(n%2!=0){
            fout1<<line<<endl;
        }
        else{
            fout2<<line<<endl;
        }
        n++;
    }
    fin.close();
    fout1.close();
    fout2.close();
    return 0;

}