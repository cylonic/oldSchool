#include <iostream>
#include <graphics.h>
#include <string>
using namespace std;


int Factorial( int m){

   if(m == 0)
      return 1;
     
   else return m*Factorial(m-1);
}   

int main(){

/*SetupGraphics();


SetPenColor(Clear);

MoveTo(100, 200);
LineTo(200, 50);
LineTo(300, 200);
LineTo(100, 200);
MoveTo(150, 125);
LineTo(250, 125);
MoveTo(150, 125);
LineTo(200, 200);
LineTo(250, 125);

SetBrushColor(Red);
SetBrushStyle(Solid);
SetPenStyle(ClearPen);
Circle (350, 150, 50);
*/

int num1, num2, num3;

while(cin){
cin >> num1 ;
cout << Factorial( num1);
cout << endl;
}







return 0;
}



