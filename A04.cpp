#include<iostream>
using namespace std;

double factorial(int n)
{
    double fact = 1;
    for(int i=n;i>0;i--)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int num;
    cout<<"Enter a natural number: ";
    cin>>num;
    cout<<endl<<"The value of 1/"<<num<<"! is = "<<double(1/factorial(num));
    return 0;
}
