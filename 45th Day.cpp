#include<iostream>
using namespace std;
void check(int arr[], int n)
{
int small, large;
small = large = arr[0];
for(int i = 1; i < n ;i++)
{
if(arr[i] < small) small = arr[i];
if(arr[i] > large)
large = arr[i];
}

cout<<"Smallest Number: "<<small<<"\n";
cout<<"Largest Number: "<<large<<"\n";
}
int main()
{
int n;
cout<<"Enter the size of array: ";
cin>>n;
int arr[n];
cout<<"Enter the elements of array: ";
for(int i=0;i<n;i++)
cin>>arr[i];
check(arr, n);
return 0;
}
