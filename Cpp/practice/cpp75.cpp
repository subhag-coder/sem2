#include <iostream>
using namespace std;
int main(){
    int matrix[2][3]={{1,2,3},{4,5,6}};
    int sum=0;
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            sum+=matrix[i][j];
        }
    }
    cout<<"Sum of all elements: "<<sum<<endl;
    cout<<"Element at [1][2]:"<<matrix[1][2]<<endl;
    return 0;
}