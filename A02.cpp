#include<iostream>
using namespace std;

void factorial_Iterative(int n)
{
    int fact = 1;
    for(int i=n;i>0;i--)
    {
        fact *= i ;
    }
    cout<<"\n\nFactorial of "<<n<<" through iterative fashion is: "<<fact;
}

int factorial_Recursive(int n)
{
    if(n>1) return n*factorial_Recursive(n-1);
    else return n;
}

int main()
{
    int n;
    cout<<"Enter the number you want to calculate its factorial for: ";
    cin>>n;
    factorial_Iterative(n);
    cout<<"\n\nFactorial of "<<n<<" through recursive fashion is: "<<factorial_Recursive(n);
    return 0;
}
