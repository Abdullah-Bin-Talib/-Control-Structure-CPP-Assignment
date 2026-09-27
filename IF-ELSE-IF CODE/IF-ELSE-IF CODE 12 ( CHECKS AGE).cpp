#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	if (age<13)
	{cout<<"Child";}
    else if(age>=13&&age<=19) 	
    {
    	cout<<"Teenager";
    }
	else if(age>=20&&age<=40)
	{
		cout<<"Middle age";
	}
	else if(age>=41&&age<=65)
	{
		cout<<"Senior";
	}
	else if(age>=66&&age<=120)
	{
		cout<<"Aged";
		
	}
	else 
	{
		cout<<"Enter a valid age.";
	}
}
