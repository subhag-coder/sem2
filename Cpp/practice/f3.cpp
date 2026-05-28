#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int num1, num2;

    string data;
    ifstream fin("file3.txt");
    ofstream fout("file4.txt", ios::app);
    fin>>num1>>num2;
    fout<<"Sum="<<num1+num2<<endl;
    cout<<"Succesfully copied to output file.";

    fin.close();
    fout.close();

    return 0;
}