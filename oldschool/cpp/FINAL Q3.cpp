#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Wesley Turner
/*
NOTE!!!!!!!!!!!!!! 
When entering numbers, you must press enter after each number,
and then CTRL-D after all numbers have been entered
*/

void main(){

float nums[50];
int count = 0;
float low, high;
int totalnum;
int lowcount = 0;
int highcount = 0;

cout << "Enter lower threshold: ";
cin >> low;
cout << "Enter upper threshold: ";
cin >> high;
cout << "Enter some numbers: ";

cout << endl << "     (Please press enter after each number and"; 
cout << endl << "     CTRL-D when all numbers have been entered)" << endl;

while(cin){

cin >> nums[count];
count++;

}
totalnum = count-1;


for(int i = 0; i < totalnum; i++)
   if( nums[i] < low )
      lowcount++;
            
for(int i = 0; i < totalnum; i++)
   if( nums[i] > high )
      highcount++;




cout << endl << "Total count of numbers: " << totalnum << endl;
cout << "Below " << setprecision(3) << low << ": " << lowcount << endl;
cout << "Above " << high << ": " << highcount;




}
