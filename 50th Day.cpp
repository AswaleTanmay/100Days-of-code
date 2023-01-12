#include <bits/stdc++.h>
using namespace std;
long long int SumOfSquare(int arr[],int n)
{
long long int sum = 0;
for(int i = 0 ; i<n ; i++)
{
sum = sum + arr[i]*arr[i];
}
return sum;
}
int main()
{
int n; cin>>n;
int arr[n];
for(int i = 0 ; i<n ; i++)
{
cin>>arr[i];
}
cout<<SumOfSquare(arr,n);
return 0;
}
