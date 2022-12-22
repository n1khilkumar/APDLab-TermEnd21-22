#include<iostream>
using namespace std;

void gcd(int num1,int num2)
{
	int num = min(num1,num2);
	int gcd;
	if(num1==num2) gcd = num1;								//Best case scenario O(1)
	for(int i=1;i<=num;i++)
	{
		if(num1%i == 0 && num2%i == 0) gcd = i;				//Time complexity:O(n), n = num 
	} 
	cout<<"\nThe Greatest common devisor of "<<num1<<" and "<<num2<<" is: "<<gcd<<endl;
}

int main()
{
	int a,b,ch;
	cout<<"\t\t\t\t\tPROGRAM THAT FINDS GREATEST COMMON DIVISOR"<<endl;
	do
	{
		cout<<"\n\nEnter your first number (must be a natural number): ";
		cin>>a;
		cout<<"\nEnter your second number (must be a natural number): ";
		cin>>b;
		gcd(a,b);
		cout<<"\n\nPress 1 to continue and any other key to exit"<<endl;
		cin>>ch;
		if(ch!=1) ch = 0;
	}while (ch);
	return 0;
}
