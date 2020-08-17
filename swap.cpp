//Swap between two numbers 

#include<iostream>

using namespace std;

int main(void)
{
	int a,b;
	cout<<"Enter a: ";
	cin>>a;
	cout<<"\nEnter b: ";
	cin>>b;
	
	a=a^b;
	b=b^a;
	a=a^b;
	
	cout<<"A = "<<a<<", B = "<<b;
}