#include<iostream>
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

int main() {
 char roman_numeral1, roman_numeral2, multiplier;
 

 int number1 = 0;
 int number2 = 0;
 int counter = 1;

cin >> roman_numeral1;

while(cin) {
 while (counter <= 2) {
  if (counter == 1) {
    int one_digit = RomanToNumber(roman_numeral1);
    number1 += one_digit;
    counter++;
   }
  else if (counter == 2) {
   cin >> roman_numeral2;
    int one_digit2 = RomanToNumber(roman_numeral2);
    number2 += one_digit2;
    counter++;
   }
  else {
   cout << "Error.";
  }
 }
 counter++;
 cin >> roman_numeral1;
 }
cout << number1 << endl << number2;
 
 
 return 0;
}
