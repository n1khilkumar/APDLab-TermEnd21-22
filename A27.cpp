#include<iostream>
#include<time.h>
using namespace std;

void countSort(int arr3[],int size,int high)
{
	int count[high+1] = {0},j=0;
	for(int i=0;i<size;i++)
	{
		count[arr3[i]]++;
	}
	cout<<"\n\nSorted merged array is: ";
	for(int i=0;i<=high;i++)
	{
		while(count[i])
		{
			arr3[j] = i;
			cout<<arr3[j]<<" ";
			count[i]--;
			j++;
		}
	}
}

void merging(int arr1[],int n,int arr2[],int m,int lim1,int lim2)
{
	int size = m+n;
	int high = max(lim1,lim2);
	cout<<"\nHigh"<<high;
	int arr3[size],i,j=0,k=0;
	cout<<"\n\nMerged Array: ";
	for(i=0;i<size;i++)
	{
		if(i<n) arr3[i] = arr1[j++];
		else arr3[i] = arr2[k++];
		cout<<arr3[i]<<" ";
	}
	countSort(arr3,size,high);
}

int main()
{
	srand(time(0));
	int n,m,lim1,lim2;
	cout<<"Enter the size of the first array: ";
	cin>>n;
	cout<<"\nEnter the maximum limit of the elements: ";
	cin>>lim1;
	cout<<"\nEnter the size of the second array: ";
	cin>>m;
	cout<<"\nEnter the maximum limit of the elements: ";
	cin>>lim2;
	int arr1[n],arr2[m];
	cout<<"\n\nGenerated 1st ARRAY: ";
	for(int i=0;i<n;i++)
	{
		arr1[i] = rand()%(lim1+1);
		cout<<arr1[i]<<" ";
	}
	cout<<"\n\nGenerated 2nd ARRAY: ";
	for(int i=0;i<m;i++)
	{
		arr2[i] = rand()%(lim2+1);
		cout<<arr2[i]<<" ";
	}
	merging(arr1,n,arr2,m,lim1,lim2);
	return 0;
}
