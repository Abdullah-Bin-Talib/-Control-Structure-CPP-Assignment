#include<iostream>
using namespace std;
int main()
{
	int temp;
	cout<<"Enter temperature:";
	cin>>temp;
	if (temp>30)
	{cout<<"Hot";}
	else if (temp<10)
	{cout<<"Cold";}
	else if (temp<0)
	{
		cout<<"Below freezing point.";
	}
	
}
