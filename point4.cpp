//Write a program in C to add two numbers using pointers.
#include <iostream>

using namespace std;

int main(){
  //declare variables
  int a, b , sum ;
  //ask for values
  cout<<"enter first number"<<endl;
  cin>>a;
  cout<<"enter second number"<<endl;
  cin>>b;
  //pointers
  int*p=&a ;
  int *q=&b;
  //add
  sum = *q+*p ;
  //print
  cout<<" the required sum is "<<sum<<endl;
  return 0;
}
