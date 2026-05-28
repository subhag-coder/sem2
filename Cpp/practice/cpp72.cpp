#include <iostream>
using namespace std;
int main(){
  int x=0, y=0, z=1;
  switch(x){
      case 0:x=1;
      y=x+y;
      z=8;
      case 1:x=4+z;
      default: y=3;
      x=y;
      z=1;
  }
  cout<<y<<endl;
  cout<<x<<endl;
  cout<<z<<endl;
  return 0;
}