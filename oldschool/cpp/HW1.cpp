#include<iostream>
#include<string>
using namespace std;

//Wesley Turner
//CS 102-006
//HW 1 2-14-12


int main()
{

string first, second, op;
float num1, num2, num3;
bool is_valid=true;

cout << "Enter the first operand (zero, one or two): " << endl;
cin >> first;
cout << "Enter an arithmetic operator (plus, minus, times, divide): " <<endl;
cin >> op;
cout << "Enter the second operand (zero, one or two): " << endl;
cin >> second;

if(first== "zero" )
   num1 = 0;
 else if(first== "one")
      num1 = 1;
   else if(first== "two")
         num1=2;
       else
         is_valid = false;
         
if(second== "zero" )
   num2 = 0;
 else if(second== "one")
      num2 = 1;
   else if(second== "two")
         num2=2;
       else
         is_valid = false;         

if(is_valid == true)
{
   if(op == "plus")
      num3 = num1 + num2;
    
     else if(op == "minus")
         num3 = num1 - num2;
        
        else if(op == "times")
            num3=num1*num2;
           
           else if(op == "divide")
            {
             if(num2 == 0)
               is_valid = false;
                else
                  num3 = num1 / num2;
 
             }
    else
      is_valid = false;
}

if(is_valid == true)
cout << "The value of the expression is " <<num3<< ".";
else
cout << "The expression that you entered is not valid.";             




return 0;
}


