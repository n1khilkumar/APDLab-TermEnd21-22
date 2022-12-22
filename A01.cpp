#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,num=0;
    cout<<"Enter the number of digits you want: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter digit "<<i+1<<": ";
        cin>>arr[i];
        num = num + arr[i]*pow(10,n-1-i);
    }
    cout<<"\n\nRequired number is: "<<num;
}
