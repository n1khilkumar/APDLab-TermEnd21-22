#include<iostream>
#include<time.h>
using namespace std;

void primeFactor(int num)
{
	int div = 7,temp = num,prime;
	while(num/10!=0)
	{
		
		if(num%div==0)
		{
			if(temp == num) cout<<div;				//to form 7 x 7 x 7 x 7 x 7
			else cout<<" x "<<div;					//instead of x 7 x 7 x 7 x 7 x 7
			prime = num;
			num = num/div;
			continue;
		}
		div += 2;
	}
	if(num>1) cout<<" x "<<num;
	if(temp==prime) cout<<"\nGenerated number is a prime number!!";
}

int main()
{
	int random,n;
	srand(time(0));
	cout<<"Enter how many numbers you want to generate: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
//		random = 16807;
		random = rand() + 6;
		while(random%2==0||random%3==0||random%5==0)
		{
			random = rand() + 6;
		}
		cout<<"\n\nGenerated random number is: "<<random;
		cout<<"\nPrime factors of "<<random<<" = ";
		primeFactor(random);
	}
	return 0;
}
