#include<iostream>
using namespace std;
int main()
{
  int Thour,Tmin,Tsec;
  int thour,tmin,tsec;
  cout<<"Enter hours in 24 hours format"<<endl;
  cin>>Thour;
  cout<<"Enter minutes in 24 hours format"<<endl;
  cin>>Tmin;	
  cout<<"Enter seconds in 24 hours format"<<endl;
  cin>>Tsec;
  cout<<"Enter hours in 12 hours format"<<endl;	
  cin>>thour;
  cout<<"Enter minutes in 12 hours format"<<endl;	
  cin>>tmin;
  cout<<"Enter seconds in 12 hours format"<<endl;	
  cin>>tsec;
  if (Thour>12)
  {
  	Thour=Thour-12;
  	cout<<"hours in 24 hours formet is="<<Thour<<endl;
  	tmin=Tmin;
  	cout<<"The value of Tmin in 12 hour format is="<<Tmin<<endl;
  	cout<<"The value of Tsec in 12 hour format is="<<Tsec<<endl;
  	
  }
  else if (Thour<=12)
  {
  	Thour=thour;
  	cout<<"Value of thour in 24 hours formet is="<<thour<<endl;
  	Tmin=tmin;
  	cout<<"Value of tmin in 24 hours formet is="<<tmin<<endl;
  	Tsec=tsec;
  	cout<<"Value of tsec in 24 hours formet is="<<tsec<<endl;
  }
  else 
     cout<<"Please enter a correct value";
     return 0;
  
  	
	
}

