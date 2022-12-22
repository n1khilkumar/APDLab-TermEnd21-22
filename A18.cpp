#include<iostream>
using namespace std;

int returnSize(int arr[],int num)
{
	int i = 0;
	while(num)
	{
		arr[i++] = num%10;
		num = num/10;
	}
	return i+1;
}

void multiply(int arr[],int &size,int num);

void power(int num,int pow)
{
	int arr[500000];
	int size = returnSize(arr,num);
	for(int i=1;i<pow;i++)
	{
		multiply(arr,size,num);
	}
	cout<<endl<<num<<" raised to the power "<<pow<<" is = ";
	for(int i=size-1;i>=0;i--)
	{
		cout<<arr[i];
	}
	cout<<"\n\nTotal digits of the result are: "<<size;
}

void multiply(int arr[],int &size,int num)
{
	int carry = 0, product;
	for(int i=0;i<size;i++)
	{
		product = arr[i]*num + carry;
		arr[i] = product%10;
		carry = product/10;
	}
	while(carry)
	{
		arr[size++] = carry%10;
		carry = carry/10;
	}
}

int main()
{
	int num,pow;
	cout<<"Enter the number: ";
	cin>>num;
	cout<<"\nEnter its power: ";
	cin>>pow;
	power(num,pow);
	return 0;
}
