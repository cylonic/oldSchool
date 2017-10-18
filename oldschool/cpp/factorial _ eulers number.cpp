#include <iostream>
#include <iomanip>
using namespace std;


float fact(int z){
int i;
float sum = 1;
   for(int i = 1; i <= z; i++)
   sum *= i;

   return sum;   
}

void main(){

float sum = 1;

for( int x = 1; x <= 34; x++)
sum += (1/(fact( x )));

cout << "e = " << setprecision(35) << sum;

}
