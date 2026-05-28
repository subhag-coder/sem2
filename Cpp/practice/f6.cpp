#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    int lines=1;
    char ch;

    ofstream fout("file2.txt", ios::app);
    ifstream fin("file4.txt");
    
    while(fin.get(ch)){
        if (ch==' '){
            continue;
        }
        fout<<ch;
    }
    fin.close();
    fout.close();
    return 0;
}
