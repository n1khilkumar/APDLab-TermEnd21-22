#include<iostream>
using namespace std;

int main()
{
	int n,i,j,check,flag = 1;
	cout<<"Enter the number of rows and column you want in matrix: ";
	cin>>n;
	int arr[n][n];
	int sumArr[n*2+2] = {0};
	int size1 = 0, size2 = n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"Enter the element at (row"<<i+1<<",column"<<j+1<<"): ";
			cin>>arr[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sumArr[size1] = sumArr[size1] + arr[i][j];
			sumArr[size2] = sumArr[size2] + arr[j][i];
			if(i==j) 
			{
				sumArr[2*n] = sumArr[2*n] + arr[i][j];
				sumArr[2*n+1] = sumArr[2*n+1] + arr[n-1-i][j];
			}
		}
		size1++;
		size2++;
	}
	check = sumArr[0];
	for(i=1;i<2*n+2;i++)
	{
		if(check!=sumArr[i])
		{
			flag = -1;
			cout<<"\n\nEntered matrix is not a magic square!";
		} 
	}
	if(flag==1) cout<<"\n\nEntered matrix is a magic square!!!\nSum of magic square is = "<<check;
	return 0;
}
