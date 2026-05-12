#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream fin;
    ofstream fout;
    fin.open("text3.txt");
    fout.open("text4.txt");
    char ch;
    while(fin.get(ch)){
        if (ch==' '){
            continue;
        }
        else
        fout<<ch;
    }
    return 0;
}
