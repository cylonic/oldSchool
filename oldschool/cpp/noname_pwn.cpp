#include <iostream>
#include <string>
#include <stddef>
using namespace std;

int RomanToNumber(char roman_numeral)
{
 int num;
 if(roman_numeral == 'I' || roman_numeral == 'i')
    num = 1;
 else if(roman_numeral == 'V' || roman_numeral == 'v')
    num = 5;
 else if(roman_numeral == 'X' || roman_numeral == 'x')
    num = 10;
 else if(roman_numeral == 'L' || roman_numeral == 'l')
    num = 50;
 else if(roman_numeral == 'C' || roman_numeral == 'c')
    num = 100;
 else if(roman_numeral == 'D' || roman_numeral == 'd')
    num = 500;
 else if(roman_numeral == 'M' || roman_numeral == 'm')
    num = 1000;
 else
    num = 0;   
 return num;
}

void NumberToRoman(int answer)
{
int number, mod1, mod2, mod3, mod4, mod5;
char result;

mod1 = answer / 1000;
mod2 = answer / 100 % 10;
mod3 = answer / 10 % 10;
mod4 = answer % 100 % 10;


for(int z = 0; z < mod1; z++)
   cout<< 'M';
if( mod2 >= 5){
   cout<< 'D';
   mod2 -= 5;}
for(int z = 0; z < mod2; z++)
   cout<<  'C';
if(mod3 >= 5){
   cout<<  'L';
   mod3 -= 5;}   
for(int z = 0; z < mod3; z++)
   cout<<  'X';
if(mod4 >= 5){
   cout << 'V';
   mod4 -= 5;}
for(int z = 0; z < mod4; z++)
   cout<< 'I';

}

int main() {
 string roman_numeral1, roman_numeral2;
 int result;
 string op_word;
 char oper;
 int number1 = 0;
 int number2 = 0;
 int counter = 1;


cin >> roman_numeral1;

while(cin) {
int number1 = 0;
int number2 = 0;
int counter = 1;

 while (counter <= 2) {
  if (counter == 1) {
   int x = 0;
   while (x < roman_numeral1.length()) {
    int one_digit = RomanToNumber(roman_numeral1[x]);
    number1 = number1 + one_digit;
    x++;
   }
    cout << "The first number is " << number1 << endl;
  }
  if (counter == 2) {
   int x = 0;
   cin >> roman_numeral2;
   while (x < roman_numeral2.length()) {
    int one_digit = RomanToNumber(roman_numeral2[x]);
    number2 = number2 + one_digit;
    x++;
   }
    cout << "The second number is " << number2 << endl;
  }
  counter++;
 }
 cin >> oper;
 cout << "Arithmetic operation is " << oper << endl;
 switch (oper) {
  case '+':
   result = number1 + number2;
   op_word = "sum";
   break;
  case '-':
   result = number1 - number2;
   op_word = "difference";
   break;
  case '*':
   result = number1 * number2;
   op_word = "product";
   break;
  case '/':
   result = number1 / number2;
   op_word = "quotient";
   break;
  default:
   cout << "Bad operator '" << oper << "'" << endl;
 }
 

 cout << "The " << op_word << " of " << number1 << " and " <<
 number2 << " is "; 
 
 if(result < 0)
 cout << '-';
 NumberToRoman(abs(result));
 if(result == 0)
 cout << "zero";
 cout << " (" << result << ")"; 

cout << endl << '\n';
cin >> roman_numeral1;
}
 return 0;
}



































