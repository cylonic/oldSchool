//---------------------------------------------------------------------
// Name   :
//             
// Course :  CS 102
//
// Purpose: This program reads three positive integers and finds and prints
//          the minimum, and the sum of the cubes of the integers
//          from 1 to the minimum.
//  
// Input  : Three positve integers num1, num2 and num3.
// 
// Output : Minimum of the three numbers, 
//          Sum of the cubes of integers from 1 to minimum.  
//---------------------------------------------------------------------

#include <iostream>
#include <cmath>
using namespace std;

int Minimum(int first, int second, int third);

//Do: 2. Write the prototype for Sum_Of_Cubes
//       Hint see function definition below.

int Sum_Of_Cubes(int third);


int main() 
{
   int num1, num2, num3, minimum;    
   int mySumOfCubes;
                                     
   cout << "Input three positve integer values: " << endl;
   cin  >> num1 >> num2 >> num3;
                
   //  Do: 3. Write the call to function Minimum assigning
   //         the result to minimum; make sure to pass 3
   //         arguments to this function. 

minimum = Minimum(num1, num2, num3);

   cout << "The minimum of " << num1 << ", " << num2 << ", and "
        << num3 << " is " << minimum << "." << endl;    

   //  Do: 4. Write the call to Sum_Of_Cubes to compute the sum 
   //         of the cubes of the integers from 1 to the minimum 
   //         and assign the result to mySumOfCubes.
     
mySumOfCubes = Sum_Of_Cubes(minimum);


   cout << "The sum of the cubes from 1 to " << minimum 
        << " is " << mySumOfCubes << "." << endl;

   return 0;
} 

    
    
//Do: 5. Write the function definition for Minimum function, 
//       that takes three integer values and returns the minimum.
//       The definition includes a header and a body.
//       Hint copy and paste prototype and remove the ; and you
//       have the header.  You do the body.


int Minimum(int num1, int num2, int num3)
{
int minimum;
if(num1 <= num2 && num1 <= num3)
minimum = num1;
else if (num2 <= num3)
minimum =  num2;
else
minimum = num3;

return minimum;
}






// This function takes its parameter and sums the cubes of the 
// numbers from 1 to this parameter.  This sum is returned.

int Sum_Of_Cubes( int minimum )
{
   int count = 1;   // Use this to control the loop.
   int sum = 0;
   // Do: 6.  Write a counter-controlled loop to sum up
   //         in the variable sum, the sum of the cubes
   //         from 1 to lastValue.
while (count <= minimum)
{
sum = sum + pow(count, 3);
count++;
}   
   


   return sum;
}
  
