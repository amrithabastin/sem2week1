
// write a program to show basic declaration of pointer

#include <iostream>

using namespace std;

int main(){
  // declare variables
  int m=10 , n=3 ,o=8 ;
  // use pointer
  int*z=&m;
  //print stuff
  cout<<"z stores :"<<z<<endl;
  cout<<"&m stores : "<<&m<<endl;
  cout<<"&n stores : "<<&n<<endl;
  cout<<"&o stores : "<<&o<<endl;
  cout<<"&z stoes : "<<&z<<endl;
  cout<<"*z stores : "<<*z<<endl;

  return 0;

} 
