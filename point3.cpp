// Write a program in C to add numbers using call by reference.
#include <iostream>

using namespace std;

void sum (int a,int b,int&t){
	
	t=a+b;
	cout<<"sum is "<<t<<endl;
}

int main(){

	int a,b,c;
	cout<<" enter two numbers"<<endl;
	cin>>a>>b;
	sum(a,b,c);
	return 0;
}
