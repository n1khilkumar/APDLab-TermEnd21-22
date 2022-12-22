#include<iostream>
using namespace std;

void convert(int num,int radix)			//Takes 2 parameters number and radix
{
	int temp = num,size = 0;
	int arr[50];						//Array to store answer
	while(temp>=radix)
	{
		arr[size++]=(temp%radix);		//Divide by radix and store remainder in arr[size]
		temp = temp/radix;				//Divide by radix and store the quotient in temp						
	}									
	arr[size] = temp;
	
	cout<<"Equivalent of "<<num<<" into radix "<<radix<<" is: ";
	
	for(int i = size;i>=0;i--)
	{
		if(arr[i]>9)					//If resulted number is greater than 9 
		{
			cout<<char(arr[i]+55);		//make it a character by adding 55 to it 
		}								//Example if arr[i] = 10, char(10+55) = A
		else
		{
			cout<<arr[i];				//If resulted number is less than 9 then print the number 
		}
	}
	cout<<endl;
}
int main()
{
	int num,ch,x,radix;
	cout<<"\t\tPROGRAM THAT CONVERTS A DECIMAL NUMBER INTO BINARY, OCTAL AND HEXADECIMAL EQUIVALENT"<<endl<<"BY NIKHIL KUMAR"<<endl<<endl;
	do
	{
		cout<<"\nEnter a decimal number: ";
		cin>>num;
		cout<<"\n\nPRESS 1 TO CONVERT INTO BINARY"<<endl;
		cout<<"PRESS 2 TO CONVERT INTO OCTAL"<<endl;
		cout<<"PRESS 3 TO CONVERT INTO HEXADECIMAL"<<endl;
		cout<<"PRESS 4 TO CONVERT INTO BINARY, OCTAL, HEXADECIMAL"<<endl;
		cout<<"PRESS 5 TO CONVERT INTO YOUR DESIRED RADIX"<<endl;
		cin>>ch;
		cout<<endl;
		switch(ch)
		{
			case 1:		convert(num,2);
						break;
			case 2:		convert(num,8);
						break;
			case 3:		convert(num,16);
						break;
			case 4:		convert(num,2);
						convert(num,8);
						convert(num,16);
						break;
			case 5:		cout<<"Enter in the radix you want to convert "<<num<<" into: ";
						cin>>radix;
						if(num<radix)
						{
							cout<<"Equivalent of "<<num<<" into radix "<<radix<<" is: "<<num<<endl;		//SPECIAL CASE
						}
						else
						{
							convert(num,radix);
						}
						
						break;
			default:	cout<<"\nINVALID SELECTION";
						exit(0);
		}
		cout<<"\nEnter 1 to continue and any other key to exit"<<endl;
		cin>>x;
		if(x!=1)
		{
			x=0;
		}
	}while(x);
	return 0;
}
