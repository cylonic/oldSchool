#include<iostream>
using namespace std;

//Wesley Turner
//CS 102-006
//HW 3 3-8-12






int RomanToNumber(char roman_numeral)
{
int num;
int sum = 0;

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





int main()
{
char roman_numeral1, roman_numeral2, multiplier;
//char rom_number;
cin >> roman_numeral1;

int final_sum = 0;
int final_sum2 = 0;

while( cin && roman_numeral1 != '\n')
{
int oneDigit = RomanToNumber(roman_numeral1);
final_sum += oneDigit;


cin >> roman_numeral2;
int oneDigit2 = RomanToNumber(roman_numeral2);
final_sum2 += oneDigit2;


//rom_number = NumberToRoman(final_sum);

cin >> roman_numeral1;
cin >> multiplier;

}
cout << final_sum;
cout << endl << final_sum2;

//cout << rom_number;
return 0;
}


