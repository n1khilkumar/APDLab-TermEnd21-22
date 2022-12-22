#include<iostream>
using namespace std;

void pseudoRandom(int a,int b,int m,int x)
{
	int arr[1001];
	arr[0] = x;
	cout<<"Generated pseudo random numbers are: "<<endl;
	for(int i=1;i<=1000;i++)
	{
		arr[i] = (a*arr[i-1] + b)%m;
		cout<<arr[i]<<" ";
	}
}

int main()
{
	pseudoRandom(19,7,48920,951);
}
