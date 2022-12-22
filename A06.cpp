#include<iostream>
using namespace std;

double root(int num)
{
	for(int i=0;i<=num;i++)
	{
		if(i*i<=num && (i+1)*(i+1)>num)
		{
			if(i*i==num)
			{
				return i;
				break;
			}
			else
			{
				for(double j=i;j<i+1; )
				{
					int ans = j*j;
					if(ans==num)
					{
						return j;
					}
					j = j + 0.00001;
				}
			}
		}
	}
}


int main()
{	int x,y;
	cout<<"\n\t\t\t\tPROGRAM THAT CALCULATES THE SQUAREROOT OF ANY POSITIVE NUMBER \nBY NIKHIL KUMAR";
	do
	{
		cout<<"\n\nEnter a number: ";
		cin>>x;
		cout<<"\nThe square root of the number "<<x<<" is: "<<root(x);
		cout<<"\n\nPRESS 1 TO CONTINUE AND ANY OTHER KEY TO EXIT \n";
		cin>>y;
		if(y!=1)
		{
			y=0;
		}
	}while(y);	
	return 0;	
}
