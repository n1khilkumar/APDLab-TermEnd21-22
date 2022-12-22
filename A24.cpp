#include<iostream>
#include<time.h>
using namespace std;

void count(int arr[],int n)
{
	int count[101]={0},sum=0;
	for(int i=0;i<n;i++)
	{
		count[arr[i]]++;
	}
	for(int i=1;i<101;i++)
	{
		cout<<"\nFrequency of element "<<i<<" in array: "<<count[i];
		sum+=count[i];
	}
	cout<<"\n______________________________________________";
	cout<<"\n                          Total = "<<sum;
}

int main()
{
	int n;
	srand(time(0));
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"\nGenerated array is: ";
	for(int i=0;i<n;i++)
	{
		arr[i] = rand()%100 + 1;
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	count(arr,n);
}
