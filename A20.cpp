#include<bits/stdc++.h>
using namespace std;

void linearSearch(int arr[],int n,int key)
{
	int flag = 1;
	cout<<"\nLINEAR SEARCHING...";
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			cout<<"\nElement found at: "<<i<<" index.";
			flag = 0;
			break;
		}
	}
	if(flag) cout<<"\n\nSORRY!!! Element wasn't found in the array...";
}

int binarySearch(int arr[],int key,int low,int high)
{
	int mid;
	if(low<high)
	{
		mid = (low+high)/2;
		if(arr[mid]==key) 
		{
			cout<<"\nElement found at: "<<mid<<" index.";
			return 0;
		}
		else if(arr[mid]<key) binarySearch(arr,key,mid+1,high);
		else binarySearch(arr,key,low,mid-1);
	}
}

void countSort(int arr[],int n,int lim)
{
	int count[lim+1]={0},i;
	for(i=0;i<n;i++)
	{
		count[arr[i]]++;
	}
	int j = 0;
	for(int i=0;i<=lim;i++)
	{
		if(count[i])
		{
			while(count[i])
			{
				arr[j++] = i;
				count[i]--;
			}
		}
	}
}

int main()
{
	int n,lim,key;
	clock_t start1,start2,end1,end2;
	cout<<"Enter the size of the array: ";
	cin>>n;
	cout<<"\nEnter the limit of the elements: ";
	cin>>lim;
	int arr[n];
	cout<<"\nUnsorted array is: ";
	for(int i=0;i<n;i++)
	{
		arr[i] = rand()%(lim+1);
		cout<<arr[i]<<" ";
	}
	cout<<"\n\nEnter the element you want to search: ";
	cin>>key;
	start1 = clock();
	linearSearch(arr,n,key);
	end1 = clock();
	cout<<"\n\nSorted array is: ";
	countSort(arr,n,lim);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n\nBINARY SEARCHING...";
	start2 = clock();
	if(binarySearch(arr,key,0,n)) cout<<"\n\nElement wasn't found in the array...";
	end2 = clock();
	double timeTaken1 = double(end1-start1)/double(CLOCKS_PER_SEC);
	double timeTaken2 = double(end2-start2)/double(CLOCKS_PER_SEC);
	cout<<"\n\n\nTime taken by Linear Search: "<<fixed<<timeTaken1<<setprecision(5)<<" sec";
	cout<<"\nTime taken by Binary Search: "<<timeTaken2<<" sec.";
	return 0;
}
