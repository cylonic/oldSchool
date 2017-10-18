#include<iostream>
using namespace std;

//Wes Turner



float median(float num1, float num2, float num3){

float middleNum;

if((num1 <= num2 && num1 >= num3) || (num1 <= num3 && num1 >=num3))
middleNum = num1;
else if((num2 <= num3 && num2 >= num1) || (num2 <= num1 && num2 >= num3))
middleNum = num2;
else
middleNum = num3;

return middleNum;
}







int main(){

float num1, num2, num3, med;

cout << "enter 3 numbers: ";
cin >> num1 >> num2 >> num3;

med = median(num1, num2, num3);


cout << med;

return 0;
}
