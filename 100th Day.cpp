#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int count(int arr[],int n){
 int res=1;
 for(int i=1;i<n;i++){
 int j=0;
 for(j=0;j<i;j++){
 if(arr[i]==arr[j]){
 break;
 }
 }
 if(i==j){
 res++;
 }
 }
 return res;
}
int main() {
long long t;
cin>>t;
while(t--){
 int arr[4];
 cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
 int num=count(arr,4);
 if(num==4){
 cout<<"2"<<endl;
 }
 else if(num==3){
 cout<<"2"<<endl;
 }
 else if(num==2){
 sort(arr,arr+4);
 if(arr[0]==arr[1]&&arr[0]==arr[2]){
 cout<<"1"<<endl;
 }
 else if(arr[1]==arr[2]&&arr[1]==arr[3]){
 cout<<"1"<<endl;
 }
 else{
 cout<<"2"<<endl;
 }
 }
 else{
 cout<<"0"<<endl;
 }
}
return 0;
}
