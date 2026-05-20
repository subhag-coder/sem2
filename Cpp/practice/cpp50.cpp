#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream fin;
    ofstream fout;
    fin.open("file1.txt");
    fout.open("file4.txt");
    char ch;
    int vow=0, con=0;
    while(fin.get(ch)){
        if(ch==' ' || ch=='\0'){
            continue;
        }
        else if(ch=='A' || ch=='U' || ch=='E' || ch=='I' || ch=='O' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            vow++;
        }
        else{
            con++;
        }
    }
    fout<<"Vowels = "<<vow<<endl;
    fout<<"Consonant = "<<con<<endl;
    return 0;
}
