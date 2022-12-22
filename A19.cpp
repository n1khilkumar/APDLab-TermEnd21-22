#include<iostream>
#include<math.h>
using namespace std;

bool prime(int num)
{
	for(int i=2;i<=sqrt(num);i++)
	{
		if(num%i==0) return false;
	}
	return true;
}

void printPrime(int num1,int num2)
{
	cout<<"\nPrime number between "<<num1<<" and "<<num2<<" are: ";
	for(int i=num1+1;i<num2;i++)
	{
		if(prime(i)==true) cout<<", "<<i;
	}
}

int main()
{
	int num1,num2;
	cout<<"Enter the range between which you want to find prime number"<<endl;
	cout<<"Enter left hand limit: ";
	cin>>num1;
	cout<<"Enter right hand limit: ";
	cin>>num2;
	printPrime(num1,num2);
}
