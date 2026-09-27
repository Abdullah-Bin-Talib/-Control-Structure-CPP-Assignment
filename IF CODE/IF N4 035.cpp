#include<iostream>
using namespace std;

int main() {
   float temp;
   cout<<"Enter temperature: ";
   cin>>temp;
   if(temp>30)
   {
   	 cout<<"Hot";
   }
   else if(temp<10)
   {
   cout<<"Cold";
   }


    return 0;
}
