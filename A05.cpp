#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

const double PI = 3.1415926536;

long long int factorial(int num)
{
    long long int fact = 1;
    for(int i=num;i>0;i--)
    {
        fact = fact * i;
    }
    return fact;
}

double sine(double x)
{
    double res = 0;
    for(int i=0;i<10;i++)
    {
        res += (pow((-1),i)*pow(x,(2*i+1)))/factorial(2*i+1);
    }
    return res;
}

double toRange_0to2PI(double x)
{
    int i = 0;
    while(true)
    {
        if(i*PI<=x && x<=(i+2)*PI)
        {
            return(sine(x-i*PI));
        }
        i = i + 2;
    }
}

double degreeToRadian(double x)
{
    return(toRange_0to2PI(x*0.0174532925));  
}

double negToPos(double x,int y)
{
    if(y==2) return degreeToRadian(-1*x);
    else return(toRange_0to2PI(-1*x)); 
}

int main()
{
    cout<<"SIN X CALCULATOR"<<endl<<endl;
    int ch;
    double x,res;
    while(true)
    {   
        cout<<fixed<<setprecision(0)<<"\n\nPress 1 to enter the value in RADIAN:"<<endl;
        cout<<"Press 2 to enter the value in DEGREE:"<<endl;
        cout<<"Press 0 to exit: "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 0: exit(0);
                    break;
            case 1: cout<<"\nEnter the value of x in Radian: ";
                    cin>>x;
                    if(x<0) res = - negToPos(x,1);
                    else res = toRange_0to2PI(x);
                    cout<<"\n\nThe value of sin "<<x<<" is = "<<fixed<<setprecision(4)<<res;
                    break;
                
            case 2: cout<<"\nEnter the value of x in Degree: ";
                    cin>>x;
                    if(x<0) res = - negToPos(x,2);
                    else res = degreeToRadian(x);
                    cout<<"\n\nThe value of sin "<<x<<" is = "<<fixed<<setprecision(4)<<res;
                    break;
                
            default:cout<<"\nInvalid Selection!! Try AGAIN";
        }
    }
    
    return 0;
}
