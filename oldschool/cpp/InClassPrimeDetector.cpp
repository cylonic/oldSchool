#include <iostream>

using namespace std;

int main ()
{
   int testingNumber;
   
   cin>> testingNumber;
   
   //BEGIN: algorithm implemented using a for loop
   /*
   for (int i = testingNumber/2; i > 1; i--)
   {
      if ((testingNumber % i) == 0)
      {
         cout<< testingNumber << " is not prime.";
         return 0;
      }
   }
   */
   //END: algorithm implemented using a for loop
   
   //BEGIN: algorithm implemented using a while loop
   int counter = testingNumber/2;
   
   while (counter > 1)
   {
      if ((testingNumber % counter) == 0)
      {
         cout<< testingNumber << " is not prime.";
         return 0;
      }
      counter--;
   }
   //END: algorithm implemented using a while loop

   cout<< testingNumber << " is prime.";
   
   return 0;
}
