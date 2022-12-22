#include<bits/stdc++.h>
using namespace std;

int check_multiply(int c_1,int r_2)
{
    if(c_1==r_2) 
    {
        cout<<"\nMatrix multiplication is possible";
        return 1;
    }
    else 
    {
        cout<<"\nSorry!! matrix can't be multiplied";
        return 0;
    }
}

int check_add(int r_1,int c_1,int r_2,int c_2)
{
    if(r_1==r_2&&c_1==c_2) 
    {
        cout<<"\nMatrix can be added";
        return 1;
    }
    else 
    {
        cout<<"\nSorry!! matrix can't be added";
        return 0;
    }
}

void add(int arr1[][100],int r_1,int c_1,int arr2[][100])
{
	cout<<"\n\nSum of matrix 1 and matrix 2 is: \n";
	for(int i=0;i<r_1;i++)
	{
		for(int j=0;j<c_1;j++)
		{
			cout<<arr1[i][j]+arr2[i][j]<<" ";
		}
		cout<<endl;
	}
}

void multiply(int arr1[][100],int r_1,int c_1,int arr2[][100],int c_2)
{
	int sum = 0;
	cout<<"\n\nMatrix multiplication of matrix 1 and matrix 2 is: \n";
	for(int i=0;i<r_1;i++)
	{
		for(int j=0;j<c_2;j++)
		{
			for(int x=0;x<c_1;x++)
			{
				sum+=arr1[i][x]*arr2[x][j]; 
			}
			cout<<sum<<" ";
			sum = 0;
		}
		cout<<endl;
	}
}
int main()
{
    int r_1,c_1,r_2,c_2,ch_a,ch_m;
    cout<<"Enter how many rows you want in 1st matrix: ";
    cin>>r_1;
    cout<<"Enter how many columns you want in 1st matrix: ";
    cin>>c_1;
    cout<<"Enter how many rows you want in 2nd matrix: ";
    cin>>r_2;
    cout<<"Enter how many columns you want in 2nd matrix: ";
    cin>>c_2;
    ch_a = check_add(r_1,c_1,r_2,c_2);
    ch_m = check_multiply(c_1,r_2);
    if(ch_a==0&&ch_m==0)
    {
    	exit(0);
	}
	else
	{
		int arr1[r_1][100],arr2[r_2][100];
		srand(time(0));
		cout<<"\nMatrix 1:\n\n";
		for(int i=0;i<r_1;i++)
	    {
	    	for(int j=0;j<c_1;j++)
	    	{
	    		arr1[i][j] = rand()%10;
				cout<<arr1[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<"\nMatrix 2:\n\n";
		for(int i=0;i<r_2;i++)
	    {
	    	for(int j=0;j<c_2;j++)
	    	{
	    		arr2[i][j] = rand()%10;
				cout<<arr2[i][j]<<" ";
			}
			cout<<endl;
		}
		if(ch_a==1) add(arr1,r_1,c_1,arr2);
		if(ch_m==1) multiply(arr1,r_1,c_1,arr2,c_2);
	}
}
