#include<iostream>
using namespace std;

// finds sum of numbers between 2 inputs
// eg. (1, 3) = 1+2+3 = 6
int main()
{
int num1, num2;

cout << "Enter two positive integers: ";
cin >> num1 >> num2;



while(cin)
{
int sum = num1;
int total = num1;


   if(num1 <= num2)
    {
      for(int i=num1; i < num2; i++)
      {
         sum=sum+1;
         total=total+sum;
      }
    }
   else
    {
      cout<< "Second number is smaller";
      cout << endl << "Enter two positive integers: ";
      cin >> num1 >> num2;
    }
  
cout  << "Sum is: " << total;
cout << endl << "Enter two positive integers: ";
cin >> num1 >> num2;
}  
 


return 0;
}


