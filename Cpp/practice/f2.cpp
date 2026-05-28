#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;
int main(){
    ifstream fin;
    fin.open("file1.txt");

    char ch;
    int characters=0, words=0, lines=0;
    while(fin.get(ch)){
        characters++;
        if (ch=='\n'){
            lines++;
        }
        if(ch==' ' || ch=='\n' || ch=='\t'){
            words++;
        }
    }
    fin.close();
    cout<<characters<<endl;
    cout<<lines<<endl;
    cout<<words;
    return 0;
}