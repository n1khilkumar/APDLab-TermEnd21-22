#include<iostream>
#include<time.h>
using namespace std;

int main()
{
	int n,limit,max = INT_MIN, min =INT_MAX,maxIndex,minIndex;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"\nEnter the maximum limit of an element: ";
	cin>>limit;
	srand(time(0));
	cout<<"\nRandom array is: ";
	for(int i=0;i<n;i++)
	{
		arr[i] = rand()%(limit+1);
		cout<<arr[i]<<" ";
		if(max<arr[i])
		{
			max = arr[i];
			maxIndex = i;
		} 
		else if(min>arr[i])
		{
			min = arr[i];
			minIndex = i;
		}
	}
	cout<<"\n\nLargest number among the given array is: "<<max<<" \nat index: "<<maxIndex;
	cout<<"\n\nMinimum number among the given array is: "<<min<<" \nat index: "<<minIndex;
	return 0;
}
