#include<iostream>
using namespace std;

int sort(int arr[], int n)
{
int i,j;
for (i = 0; i < n-1; i++)
{
for (j = 0; j < n-i-1; j++)
{
if (arr[j] > arr[j+1])
{
int temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
}
}
}
}
int arrays(int arr1[], int arr2[], int n, int m)
{
sort(arr1,n);
sort(arr2,m);
int i;
for(i = 0; i < n; i++)
{
if(arr1[i] != arr2[i])
{
return 0;

}
}
}
int main()
{
int n1, n2;
cout<<"Enter the size of first array: ";
cin>>n1;
cout<<"Enter the size of second array: ";
cin>>n2;
int arr1[n1];
int arr2[n2];
int i;
cout<<"Enter the first array elements: ";
for(i = 0; i < n1; i++)
{
cin>>arr1[i];
}
cout<<"Enter the second array elements: ";
for(i = 0; i < n2; i++)
{
cin>>arr2[i];
}
if(arrays(arr1, arr2, n1, n2) == 0)
{
cout<<"Not same";
}
else
cout<<"Same";
return 0;
}
