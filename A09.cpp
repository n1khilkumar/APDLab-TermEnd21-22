#include<iostream>
using namespace std;

void reverse(char str[],int n)
{
    char temp; int count = 0;
    for(int i=0;i<n/2;i++)
    {
        if(str[i] == str[n-i-1]) count++;
        temp = str[i];
		str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }
    if(count == n/2) cout<<"\nString is a palindrome!!";
    cout<<"\nReversed string is: "<<str;
}

int main()
{
    int n;
    cout<<"Enter the size of the string: ";
    cin>>n;
    char str[n];
    cout<<"Enter the string: ";
    cin>>str;
    cout<<"String is: "<<str;
    reverse(str,n);
    return 0;
}
