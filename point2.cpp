//2. Write a program in C to demonstrate how to handle the pointers in the program
#include <iostream>

using namespace std;

int main(){
//declare variable
int m=29;
//print
cout<<"m stores :"<<m<<endl;
cout<<"&m stores :"<<&m<<endl;
//use pointers
int* ab=&m;
//print
cout<<"ab stores :"<<ab<<endl;
cout<<"*ab stores :"<<*ab<<endl;
//chage variable
m=34;
//print
cout<<"now ab stores :"<<ab<<endl;
cout<<"now *ab stores :"<<*ab<<endl;
//change var using pointer
*ab=78;
//print
cout<<"now &m stores :"<<&m<<endl;
cout<<"now m stores :"<<m<<endl;

return 0;
}
