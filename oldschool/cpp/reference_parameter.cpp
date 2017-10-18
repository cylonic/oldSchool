#include<iostream>
using namespace std;


void swap(int &a, int &b)
{

int temp;
temp = a;
a = b;
b = temp;
}




int main()
{
int num1, num2;
cin >> num1 >> num2;

swap(num1, num2);

cout << num1 << endl << num2;

return 0;
}
