#include<iostream>
#include<time.h>
using namespace std;

int remUnsortedDuplicacy(int arr[],int n)
{
	int i,j,count = 0;
	for(i=0;i<n-1;i++)
	{
		if(arr[i]==INT_MIN) continue;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==INT_MIN) continue;
			else if(arr[i]==arr[j]) arr[j] = INT_MIN;
			count++;
		}
	}
	j=0;
	cout<<"\n\nArray after removing duplicacy is: ";
	for(i=0;i<n;i++)
	{
		if(arr[i]!=INT_MIN) 
		{
			arr[j] = arr[i];
			cout<<arr[j]<<" ";
			j++;
		}
	}
	return count;
}

int remSortedDuplicacy(int arr[],int n)
{
	int j,count = 0;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]==INT_MIN) continue;
		j=i+1;
		while(arr[i]==arr[j])
		{
			arr[j] = INT_MIN;
			j++;
			count++;
		}
	}
	cout<<"\n\nArray after removing duplicacy is: ";
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=INT_MIN) cout<<arr[i]<<" ";
	}
	return count;
}

void countSort(int arr[],int n,int lim)
{
	int count[lim+1]={0},j=0;
	for(int i=0;i<n;i++)
	{
		count[arr[i]]++;
	}
	cout<<"\n\nSorted array is: ";
	for(int i=0;i<=lim;i++)
	{
		while(count[i])
		{
			arr[j] = i;
			cout<<arr[j]<<" ";
			count[i]--;
			j++;
		}
	}
}

int main()
{
	int n,lim,i,j=0,unsortedComp,sortedComp;
	srand(time(0));
	cout<<"Enter the size of the array: ";
	cin>>n;
	cout<<"\nEnter the maximum limit of the elements: ";
	cin>>lim;
	int arr1[n],arr2[n];
	cout<<"\n\nGenerated array is: ";
	for(i=0;i<n;i++)
	{
		arr1[i] = rand()%(lim+1);
		arr2[j++] = arr1[i];
		cout<<arr1[i]<<" ";
	}
	unsortedComp = remUnsortedDuplicacy(arr1,n);
	countSort(arr2,n,lim);
	sortedComp = remSortedDuplicacy(arr2,n);
	cout<<"\n\nTotal comparisons taken to remove duplicacy in Unsorted array: "<<unsortedComp;
	cout<<"\nTotal comparisons taken to remove duplicacy in sorted array: "<<sortedComp;
	return 0;
}
