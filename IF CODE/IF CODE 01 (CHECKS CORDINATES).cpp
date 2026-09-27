#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter x: ";
	cin>>x;
	cout<<"Enter y: ";
	cin>>y;
	if (x > 0 && y > 0 && (x * x + y * y < 1)) 
	{
	cout<<"Point is in the upper-right interior unit circle";
}
	
}
