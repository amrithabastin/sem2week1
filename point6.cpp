// Write a program in C to find the maximum number between two numbers using a pointer.
#include <iostream>

using namespace std;

void max(int*a,int*b){
	if(*a<*b)
	cout<< *b<<endl;
	else if(*a>*b)
	cout<<*a<<endl;
	else
	cout<<"error (both are equal)"<<endl;
}

int main(){
	// declare variables
	int m, n ;
	//ask input
	cout<<" enter two numbers"<<endl;
	cin>>m>>n;
	// use pointer
	int*z=&m;
	int *y=&n;
	//print stuff
	cout<<"the required maximum is "<<endl;
	max(z,y);
	return 0;

} 
