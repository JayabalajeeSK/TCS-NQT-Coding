/*
Printing Unique Elements in an Array Write a program to print all the unique elements in the given array.

Input Format:

The first line of input denotes the size of an array(N) The remaining line of input denotes the 'N' elements.

Output Format: Print all the unique elements Sample

Input:

5

1

1

2

2

3

Sample Output: 1 2 3
*/
#include<iostream>
using namespace std;

void distinct(int a[], int num)
{
for (int i=0; i<num; i++)
{
int j;
for (j=0; j<i; j++)
if (a[i] == a[j])
break;
if (i == j)
cout << a[i] << " ";
}
}
int main()
{
int num;
cout<<"Enter the size of the array: " ;
cin>>num;
int a[num];
cout<<"Enter the array elements:"<<endl;
for(int i=0; i<num; i++)
{
cin>>a[i];
}
cout<<"Input Array: ";
for(int i=0; i<num; i++)
{
cout<<a[i]<<" ";
}
cout<<endl<<"Distinct Elements:" ;
distinct(a, num);
return 0;
}
