//Write a program in C to store n elements in an array and print the elements using pointer. 
#include <iostream>

using namespace std;

int print (int n,int *str1){
	
	for(int i=0;i<n;i++){
		cout<<" element -" << i<<" : ";
		cout<<*(str1+i)<<endl;
		
		
		}
	
}

int main(){
	// make arr of n elements
	int n;
	cout<<"enter max amount of elemnets in array :";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"enter element " << i<<" : "<<endl;
		cin>>arr[i];
		}
	print(n,arr);
	return 0;	
}
