#include<iostream>
using namespace std;
int main()
{
	float grade;
	cout<<"Enter your marks: ";
	cin>>grade;
	if (grade>=85&&grade<=100)
{
	cout<<"A";}
    else if ( grade>=75&&grade<=84)
    {
    	cout<<"B";
	}
	else if (grade>=65&&grade<=74)
	{cout<<"C";}
	else if (grade>=50&&grade<=64)
	{
		cout<<"D";
	}
    else if (grade<50)
    {
    	cout<<"F";
	}
   	else
   	{
   		cout<<"Enter valid marks";
	   }
	
}
