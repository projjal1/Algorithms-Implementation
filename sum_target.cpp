//Implementation of 2-sum in CPP

#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

void search(int ar[],int n,int tar)
{
	int low=0;
	int high=n-1;
	while(low<high)
	{
		int sum=ar[low]+ar[high];
		if (sum>tar)
			high-=1;
		else if (sum<tar)
			low+=1;
		else 
		{
			cout<<"Found elements "<<ar[low]<<", "<<ar[high];
			break;
		}
	}
}

int main()
{
	int n;
	cout<<"Enter no. of array elements:";
	cin>>n;
	
	int ar[n];
	
	for(int i=0;i<n;i++)
		cin>>ar[i];
	
	int target;
	cout<<"Enter target sum:";
	cin>>target;
	
	sort(ar,ar+n);
	
	search(ar,n,target);
}