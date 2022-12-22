#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n,int lim)
{
    int i, key, j, count[lim+1] = {0};
    count[arr[0]]++;
    for (i = 1; i < n; i++)
    {
        count[arr[i]]++;
		key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j--];
        }
        arr[j + 1] = key;
    }
    cout<<"\n\n\nArray after sort: ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n\nDuplicate elements are: "<<endl;
	for(int i=0;i<=lim;i++)
	{
		if(count[i]!=0) cout<<"Element "<<i<<" appeared: "<<count[i]<<" times."<<endl;
	}
}

int main()
{
	int i=0,n,lim;
	cout<<"Enter the size of the array: ";
	cin>>n;
	cout<<"\nEnter the limit of the maximum element: ";
	cin>>lim;
	int arr[n];
	srand(time(0));
	cout<<"\n\nArray before sort: ";
	for(i=0;i<n;i++)
	{
		arr[i] = rand()%(lim+1);
		cout<<arr[i]<<" ";
	}
	clock_t start, end;
	start = clock();
	insertionSort(arr,n,lim);
	end = clock();
	double timeTaken = double(end - start)/CLOCKS_PER_SEC;
	cout<<"\n\nTime taken by Insertion Sort = "<<timeTaken<<" sec";
	return 0;
}
