#include<iostream>
#include<string>
#include<cctype>
using namespace std;


int main(){

string word;
bool is_true=true;

cout << "test a word for palindrome: ";
cin >> word;


int a = word.length();

for(int i = 0; i < a; i++){
if(toupper(word[i]) != toupper(word[a-1-i]))
is_true = false;
}



if(is_true == true)
cout << "palindrome";
else
cout<< "not a palindrome";



return 0;
}
