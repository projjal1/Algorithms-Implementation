//Implementation of 3-sum in CPP

#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int search(int ar[],int low,int high,int tar)
{
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
			return 1;
		}
	}
	return 0;
}

void three_sum_search(int ar[],int n,int target)
{
	int limit=n-2; //We will search till n-2 elements as we are checking for 
	//3 elements
	for(int i=0;i<limit;i++)
	{
		int new_target=target-ar[i];
		if (search(ar,i+1,n-1,new_target))
			cout<<", "<<ar[i]<<endl;
		else 
			continue;
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
	
	three_sum_search(ar,n,target);
}