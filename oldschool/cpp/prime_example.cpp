#include<iostream>
using namespace std;

int main()
{
int number, divisor, divisorcount;

cout << "enter the number ";
cin >> number;

while(cin)
{

   divisorcount = 0;
   divisor = 2;

  while(divisor <= number/2)
  {
     if((number % divisor)== 0)
     {
     cout << divisor << endl;

     divisorcount = divisorcount + 1;

     }
    divisor = divisor + 1;
  }

cout << number << " has " << divisorcount << " divisors " <<  endl;

if(divisorcount == 0)
cout << "the number is prime";

cout << endl<< "enter the number";
cin >> number;
}



return 0;
}





