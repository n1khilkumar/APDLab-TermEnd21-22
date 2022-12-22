#include<bits/stdc++.h>
using namespace std;

void subString(string str,string subStr)
{
	int index = 0,count = 0,j;
	int strLength = str.size();
	int subStrLength = subStr.size();
	for(int i=0;i<strLength;i++)
	{
		if(subStr[0]==str[i])
		{
			j = 0;
			index = i;
			count = 0;
			while(subStr[j++]==str[i++]) 
			{
				count++;
			}
			if(count==subStrLength)
			{
			 	cout<<"\nSub String found!!! \nOn Index: "<<index;
			 	break;
			}
		}
	}
	if(count!=subStrLength) cout<<"\n\nSub String does not exist in the original string..";
}

int main()
{
	int ch;
	string str,subStr;
	while(true)
	{
		cout<<"Enter the string (No Spaces): ";
		cin>>str;
		cout<<"\nEnter the sub string you want to search for (No Spaces): ";
		cin>>subStr;
		subString(str,subStr);
		cout<<"\n\nPress 1 to continue and any other key to exit: ";
		cin>>ch;
		if(ch!=1)	return 0;
	}
}
