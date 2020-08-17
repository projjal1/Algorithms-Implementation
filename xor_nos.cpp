//Program to calculate the xor of nos. from 1 to n

#include<iostream>

using namespace std;

int perform_xor(int n)
{
	//Using efficient method of xor calculation
	int get_rem=n%4;
	
	if (get_rem==0)
		return n;
	else if (get_rem==1)
		return 1;
	else if (get_rem==2)
		return n+1;
	else 
		return 0;
}

int main(void)
{
	int n;
	cout<<"Enter the value of n: ";
	cin>>n;
	
	cout<<"The xor of all nos from 1 to "<<n<<" is "<<perform_xor(n);
}
	
	