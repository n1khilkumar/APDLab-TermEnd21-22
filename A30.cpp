#include<iostream>
#include<time.h>
using namespace std;

void swap(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void selectionSort(int arr[],int n,int lim)
{
	int min,i,j,count[lim+1]={0};
	cout<<"\n\nAfter selection sort and removing duplicacy: ";
	for(i=0;i<n;i++)
	{
		min = n-1;
		for(j=i;j<n;j++)
		{
			if(i==0) count[arr[j]]++;
			if(arr[min]>arr[j]) min = j;
		} 
		swap(arr[min],arr[i]);
		if(count[arr[i]]>1)
		{
			cout<<arr[i]<<" ";
			count[arr[i]] = 0;
		}
		else if(count[arr[i]]==1) cout<<arr[i]<<" ";
	}
}

int main()
{
	int n,lim;
	srand(time(0));
	cout<<"Enter the size of the array: ";
	cin>>n;
	cout<<"\nEnter the maximum limit of the element: ";
	cin>>lim;
	int arr[n];
	cout<<"\nGenerated array is: ";
	for(int i=0;i<n;i++)
	{
		arr[i] = rand()%(lim+1);
		cout<<arr[i]<<" ";
	}
	selectionSort(arr,n,lim);
	return 0;
}
