#include<iostream>
#include<time.h>
using namespace std;

int main()
{
	int maxMarks,minMarks,ch,sub[5],totalMarks = 0;
	cout<<"Enter the max marks of each subject: ";
	cin>>maxMarks;
	cout<<"\nEnter the min marks of each subject: ";
	cin>>minMarks;
	cout<<"\n\nPress 1 to enter the marks manually: ";
	cout<<"\nPress 2 to enter the marks randomly: "<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:	for(int i=0;i<5;i++)
				{
					cout<<"\nEnter the marks of subject "<<i+1<<" = ";
					cin>>sub[i];
					while(sub[i]<minMarks)
					{
						cout<<"\n\nEntered marks of subject "<<i+1<<" is less than minimum marks ("<<minMarks<<")";
						cout<<"\nEnter again the marks of subject "<<i+1<<" = ";
						cin>>sub[i];
					}
					totalMarks += sub[i];
				}
				cout<<"\n\nTotal marks of all five subjects: "<<totalMarks;
				cout<<"\nMaximum marks of all five subjects: "<<5*maxMarks;
				cout<<"\nPercentage received is: "<<double(totalMarks)/double(5*maxMarks)*100<<"%";
				break;
				
		case 2:	srand(time(0));
				for(int i=0;i<5;i++)
				{
					sub[i] = rand()%(maxMarks - minMarks + 1) + minMarks;
					totalMarks += sub[i];
				}
				cout<<"\n\nTotal marks of all five subjects: "<<totalMarks;
				cout<<"\nMaximum marks of all five subjects: "<<5*maxMarks;
				cout<<"\nPercentage received is: "<<double(totalMarks)/double(5*maxMarks)*100<<"%";
				break;
				
		default:cout<<"\n\nInvalid selection!!!";
	}
	return 0;
}
