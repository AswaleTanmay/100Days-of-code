#include <iostream>
using namespace std;
int main() {
int t;
cin>>t;
for(int i=0;i<t;i++){
 int arr[7];
 for(int j=0;j<7;j++){
 cin>>arr[j];}
 int a=0,b=0;
 for(int j=0;j<7;j++)
 {
 if(arr[j]==1){
 a++;}
 else{
 b++;
 }
 }
 if(a>b)
 cout<<"YES\n";
 else
 cout<<"NO\n";
}
return 0;
}
