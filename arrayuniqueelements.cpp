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