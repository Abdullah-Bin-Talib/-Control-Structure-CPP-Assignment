#include<iostream>
using namespace std;
int main()
{
	int number,firstnum,thirdnum;
	cout<<"Enter a three digit number: ";
	cin>>number;
	if(number%2==0)
	{
	  if (number>=100&&number<=999){
	     firstnum=number/100;
	   thirdnum=number%10;
	    if((firstnum+thirdnum)%2==0){
		 cout <<"Valid symmetry score.";
}
}
}

