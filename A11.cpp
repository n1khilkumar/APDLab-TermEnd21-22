#include<iostream>
#include<conio.h>
using namespace std;

void count(char str[], int n)
{
    int arr[1000] = {0};
    for(int i=0;i<n;i++)
    {
        arr[int(str[i])]++;
    }
    for(int i=0;i<1000;i++)
    {
        if(arr[i]!=0) cout<<"\nCharacter: "<<char(i)<<" appears "<<arr[i]<<" times"<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the string: ";
    cin>>n;
    char str[n];
    cout<<"\nEnter the string: ";
    cin>>str;
    count(str,n);
}
