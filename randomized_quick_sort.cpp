/*
Github username:- devansh9011

Problem Statement:-
	Given a array of size n, sort it and print it

Solution:-
	Using Quick Sort Algorithm

Time Complexity:-
	best case n*log(n)
	worst case O(n^2)
	average case n*log(n)

Note:-
	it is not a stable sorting technique so incase the order of the equal elements 
	matters then this is not a ideal choice.

Benefits of randomized quick sort over traditional one:-
	Probability of getting worst case is very less
*/
#include<iostream>
#include<vector>
#include<time.h>

using namespace std;

void swap(int &a,int &b)
{
  int r=a;
  a=b;
  b=r;
}

int partition(int l,int r,vector<int> &a)
{
 	int piv=(rand()%(r-l+1)+l); 	//generating a random position from l to r
 	swap(a[l],a[piv]);				//since the pivot has to be the first element
 	
	int i=l+1,j=l+1;        		//creating two partitions where i is defining the boundry between them
	                      			//i is pointing to the first element of the right partition
	                      			//and j is pointing to the first unchecked element
	for(;j<=r;j++)
	{
		if(a[j]<a[l])
		{
		  swap(a[i],a[j]);
		  i++;
		}
	}
	swap(a[i-1],a[l]);
	return i-1;						//last position of the left partition
}
int ans=0;

void quicksort(int l,int r,vector<int> &a)
{
  ans+=max(r-l,0);
  if(l>=r)
    return;
  int pivot=partition(l,r,a);			//partitioning the array
  quicksort(l,pivot-1,a);			  	//calling quicksort for the left partition
  quicksort(pivot+1,r,a);			  	//calling quicksort for the right partition
}

int main()
{  
	srand((time(0)));
	cout<<"\nEnter the number of elements in the array : ";
	int n;
	cin>>n;
	vector<int> a(n);
	cout<<"\nEnter the elements of the array : ";
	for(int i=0;i<n;i++)
		cin>>a[i];
	quicksort(0,a.size()-1,a);
	cout<<"\nSorted array is : ";
	for(auto x:a)
		cout<<x<<" ";
	cout<<"\nNumber of comparisons made : "<<ans;

 return 0;
}
