#include<iostream>
#include<time.h>
using namespace std;

void findMaxMin(int n,int lim)
{
	srand(time(0));
	int arr[n],max = INT_MIN,min = INT_MAX,maxIndex,minIndex,prevMax,prevMin,maxCount,minCount;
	cout<<"\nGenerated array is: ";
	for(int i=0;i<n;i++)
	{
		prevMax = max;
		prevMin = min;
		arr[i] = rand()%(lim+1);
		cout<<arr[i]<<" ";
		if(max<arr[i])
		{
			max = arr[i];
			maxIndex = i;
		} 
		if(min>arr[i]) 
		{
			min = arr[i];
			minIndex = i;
		}
		if(max==arr[i]) 
		{
			if(prevMax!=max) maxCount = 0;
			maxCount++;
		}
		if(min==arr[i])
		{
			if(prevMin!=min) minCount = 0;
			minCount++;
		}
	}
	cout<<"\n\nMaximum element found: "<<max<<" at index: "<<maxIndex;
	cout<<"\nTotal times "<<max<<" occur in array are: "<<maxCount;
	cout<<"\n\nMinimum element found: "<<min<<" at index: "<<minIndex;
	cout<<"\nTotal times "<<min<<" occur in array are: "<<minCount;
}

int main()
{
	int n,lim;
	cout<<"Enter the size of the array: ";
	cin>>n;
	cout<<"\nEnter the maximum limit of element: ";
	cin>>lim;
	findMaxMin(n,lim);
	return 0;
}
