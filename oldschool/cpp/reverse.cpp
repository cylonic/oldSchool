#include<iostream>
#include<string>
using namespace std;

void main()
{


int num_names;
        cout << "Enter number of names: ";
        cin >> num_names;
        string names[100];
        for(int i = 0; i < num_names; i++)
          cin >> names[i];
        cout << "Names in reverse order:" << endl;
        for(int i = num_names - 1; i >= 0; i--)
          cout << names[i] << endl;
}
