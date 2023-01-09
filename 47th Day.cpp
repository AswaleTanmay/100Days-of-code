#include<iostream>
#include<limits.h>
using namespace std;
int check(int n){
 int rev=0, temp = n;
 while(temp>0)
{
 int rem = temp%10;
 rev = rev*10 + rem;
 temp /= 10;
 }
 if(n==rev)
 return 1;
 return 0;
}
int main(){
 int n;
 cout<<"Enter the size of array: ";
 cin>>n;
 int arr[n];
 cout<<"Enter the elements of array: ";
 for(int i=0;i<n;i++)
 cin>>arr[i];
 int res = INT_MIN;
 for(int i=0; i<n; i++)
 {
 if(check(arr[i]) && res<arr[i])
 res = arr[i];
 }
 if(res==INT_MIN)
 res = -1;
 cout<<"Longest palindrome: "<<res;
}
