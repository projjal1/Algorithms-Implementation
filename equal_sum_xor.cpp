//Calculate the total number of combinations with numbers smaller than or equal to with a number  whose sum and XOR are equal.

//Mathematically speaking find i's such that 
// 0 <= i <= n and n+i = n^i

#include<iostream>

using namespace std;

int count_pairs(int x)
{
	//Counts number of unset bits
	int unset_bits=0;
	while(x)
	{
		if((x&1)==0)
			unset_bits+=1;
		x=x>>1;
	}
	
	//Returns 2^unset_bits
	return 1<<unset_bits;
}

int main(void)
{
	int n;
	cout<<"Enter number: ";
	cin>>n;
	
	cout<<count_pairs(n);
}
	