#include <iostream>
using namespace std;

void fibonacci_Iterative(int n)
{
    int first = 0;
    int second = 1;
    int third;
    if(n==1) third = first;
    else if(n==2) third = second;
    for(int i=0;i<n-2;i++)
    {
        third = first + second;
        first = second;
        second = third;
    }
    cout<<"\nterm "<<n<<" of fibonacci through recursive fashion is: "<<third;
}

int fibonacci_Recursive(int n)
{
    if(n<=2) return n-1;
    else return fibonacci_Recursive(n-1) + fibonacci_Recursive(n-2);
}


int main() 
{
    int n;
    cout<<"Enter the term number you want to print through fibonacci: ";
    cin>>n;
    fibonacci_Iterative(n);
    cout<<"\nterm "<<n<<" of fibonacci through recursive fashion is: "<<fibonacci_Recursive(n);
    return 0;
}
