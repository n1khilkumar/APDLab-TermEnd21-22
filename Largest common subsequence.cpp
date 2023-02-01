#include<iostream>
using namespace std;

string lcs(string s1,string s2,int m,int n)
{
    if(m==0||n==0) return "";
    if(s1[m-1]==s2[n-1]) return lcs(s1,s2,m-1,n-1) + s1[m-1];
    return max(lcs(s1,s2,m-1,n),lcs(s1,s2,m,n-1));
}

int main()
{
    string s1 = "GTTXB";
    string s2 = "GxzeTbvxXB";
    int m = s1.length();
    int n = s2.length();
    cout<<lcs(s1,s2,m,n);
    return 0;
}
