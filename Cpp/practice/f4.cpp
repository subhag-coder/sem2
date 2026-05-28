#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int sum=0, lines=1, num;
    char ch;
    ifstream fin("file3.txt");
    ofstream fout("file4.txt", ios::app);

    while(fin.get(ch)){
        if(ch=='\n'){
            lines++;
        }
    }

    for (int i=1; i<=lines; i++){
        fin>>num;
        sum+=num;
    }
    fout<<"Total="<<sum<<endl;
    cout<<"Line="<<lines<<endl;
    cout<<"Successfull copied but:";

    fin.close();
    fout.close();
    return 0;
}