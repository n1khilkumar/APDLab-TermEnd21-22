#include<iostream>
#include<time.h>
using namespace std;

void partition(int arr[],int n)
{
	cout<<"\n\nPARTITIONING...";
	int arrEven[n],arrOdd[n],even=0,odd=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0) arrEven[even++] = arr[i];
		else arrOdd[odd++] = arr[i];
	}
	cout<<"\n\nEven Partition: ";
	for(int i=0;i<even;i++) cout<<arrEven[i]<<" ";
	cout<<"\n\nOdd Partition: ";
	for(int i=0;i<odd;i++) cout<<arrOdd[i]<<" ";
	cout<<"\n\nTotal even numbers: "<<even;
	cout<<"\nTotal odd numbers: "<<odd;
}

int main()
{
	int n,lim;
	srand(time(0));
	cout<<"Enter the size of the array: ";
	cin>>n;
	cout<<"\nEnter the maximum limit of the elements: ";
	cin>>lim;
	int arr[n];
	cout<<"\n\nGenerated array is: ";
	for(int i=0;i<n;i++)
	{
		arr[i] = rand()%(lim+1);
		cout<<arr[i]<<" ";
	}
	partition(arr,n);
	return 0;
}
