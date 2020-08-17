//Find if a no. is power of two

#include<iostream>

using namespace std; 

int power_check(int x)
{
	return not(x&(x-1));
}

int main(void)
{
	int n;
	cout<<"Enter the no: ";
	cin>>n;
	
	if (power_check(n))
		cout<<"Yes";
	else 
		cout<<"No";
}
