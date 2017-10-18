#include<iostream>
using namespace std;

const int NUM = 100;

void reverse(float nums[], int length);
void swap(float &a, float & b);



void main()
{

int count;
float nums[NUM];

cin >> count;

for(int i = 0; i < count; i++)
cin >> nums[i];

reverse(nums, count);

for(int i = 0; i < count; i++)
cout << nums[i] << endl;

}

void reverse(float nums[], int length)
{
int left = 0;
int right = length -1;

while(left < right)
{
swap(nums[left], nums[right]);
left++;
right--;
}
}

void swap(float &a, float & b)
{
float temp = a;
a = b;
b = temp;
}






