#include<iostream>
#include<cmath>
using namespace std;




void main(){

int num;
int root;

cin >> num;

while(cin){
root = sqrt(num);
int divisors = 0;


for(int i = 2; i <= root; i++){
if ( num % i == 0)
divisors++;
}

if( divisors == 0)
cout << "prime";
else
cout << "not prime";
cout<< endl;
cin >> num;
}
}
