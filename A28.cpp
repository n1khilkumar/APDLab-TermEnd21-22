#include<iostream>
#include<time.h>
using namespace std;

void swap(int &num1, int &num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

int partition(int arr[], int low, int high)

{
	int i = low, j = high;
    int pivot = arr[(low+high)/2];
	while (i <= j) 
	{
		while (arr[i] < pivot) i++;
		while (arr[j] > pivot) j--;
		if (i <= j) 
		{
			swap(arr[i],arr[j]);
			i++;
			j--;
		}
    };
	return i;
}

void quickSort(int arr[], int low, int high) 
{
	int index = partition(arr, low, high);
	if(low<index-1)	quickSort(arr, low, index - 1);
	if(index<high)	quickSort(arr, index, high);
}

int main()
{
	int n,lim;
	cout<<"\nEnter the size of the array: ";
	cin>>n;
	cout<<"\nEnter the maximum limit of the elements: ";
	cin>>lim;
	cout<<"\n\nGenerated array is: ";
	srand(time(0));
	int arr[n];
	for(int i=0;i<n;i++)
	{
		arr[i] = rand()%(lim+1);
		cout<<arr[i]<<" ";
	}
	clock_t start,end;
	start = clock();
	quickSort(arr,0,n-1);
	end = clock();
	double timeTaken;
	cout<<"\n\nArray after Quick Sort is: ";
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	timeTaken = double(end - start)/double(CLOCKS_PER_SEC);
	cout<<"\n\nTime taken by Quick Sort is: "<<timeTaken<<" sec.";
	return 0;
}
