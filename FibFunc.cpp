#include<iostream>
#include<conio.h>
using namespace std;

int fib(int);

int main(){
	int x;
	cout<<"Enter number: ";
	cin>>x;
	cout<<"0"<<endl;
	for(int i=1;i<x;i++)
	cout<<fib(i)<<endl;
	getch();
	return 0;
}
int fib(int a){
	if(a<=2)
	return 1;
	else
	return fib(a-1)+fib(a-2);
}
