#include<iostream>
#include<time.h>
using namespace std;

void rearrange(int arr[],int n)
{
	int arrOdd[n/2+1],arrEven[n/2];
	int sizeOdd = 0, sizeEven = 0, temp = n;
	if(n%2!=0) temp = n+1;
	for(int i=0;i<n;i++)
	{
		if(i%2==0) arrOdd[sizeOdd++] = arr[i];
		else arrEven[sizeEven++] = arr[i];
	}
	cout<<"\n\nArray after rearrangement is: ";
	for(int i=0;i<n;i++)
	{
		
		if(i<temp/2) arr[i] = arrOdd[i];
		else arr[i] = arrEven[i - temp/2];
		cout<<arr[i]<<" ";
	}
}


int main()
{
	srand(time(0));
	int n,lim;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"\nEnter the limit of the maximum elements: ";
	cin>>lim;
	cout<<"\n\nGenerated array is: ";
	for(int i=0;i<n;i++)
	{
		arr[i] = rand()%(lim+1);
		cout<<arr[i]<<" ";	
	}
	rearrange(arr,n);
	return 0;
}
