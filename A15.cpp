#include<iostream>
using namespace std;

void reverse(int arr[],int n)
{
	int count = 0,temp,comp = 0;
	for(int i=0;i<n/2;i++)
	{
		if(arr[i] == arr[n-i-1])
		{
			count++;
			continue;
		} 
		temp = arr[i];
		arr[i] = arr[n-i-1];
		arr[n-i-1] = temp;
		comp++;
	}
	if(count == n/2) cout<<"\nEntered number is a Palindrome!!";
	cout<<"\nReversed Number is: ";
	for(int i=0;i<n;i++) cout<<arr[i];
	cout<<"\n\nTotal Comparisons done: "<<comp;
}

int main()
{
	int n;
	cout<<"Enter how many digits you want to enter: ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter digit "<<i+1<<": ";
		cin>>arr[i];
	}
	cout<<"\nEntered Number is: ";
	for(int i=0;i<n;i++) cout<<arr[i];
	reverse(arr,n);
	return 0;
}
