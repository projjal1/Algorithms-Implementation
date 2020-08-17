//Given a set of numbers 
//Find the xor of all the subsets 

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//If no. of elements is more than 1 then return 0
//Else return first element of sorted array
int xor_subset(int arr[],int n)
{
	if(n==1)
		return arr[0];
	else 
		return 0;
}

int main(void)
{
	int arr[]={12,2,21,3,4,7};
	int n=sizeof(arr)/sizeof(int);
	sort(arr,arr+n);
	
	cout<<"The xor of all subsets is : "<<xor_subset(arr,n);
	return 0;
}