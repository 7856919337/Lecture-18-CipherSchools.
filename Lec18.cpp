#include<iostream>
using namespace std;
int swap(int &a,int &b){
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"The value of a and after swapping inside function are:"<<a<<" "<<b<<endl;
}
int main(){
	int a,b;
	cout<<"Enter the values of a and b=";
	cin>>a>>b;
	swap(a,b);
	cout<<a<<" "<<b;
	
	
}
