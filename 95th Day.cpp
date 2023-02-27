#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isPowerOf2(ll n){
 return (ceil(log2(n))==floor(log2(n)));
}
long long binpow(long long a, long long b)
{
 long long res = 1;
 while (b > 0) {
 if (b & 1)
 res = res * a;
 a = a * a;
 b >>= 1;
 }
 return res;
}
int main() {
int t;cin>>t;
while(t--){
 ll n;cin>>n;
 if(isPowerOf2(n)==true) cout<<"0\n";
 else{
 int cnt=0;
 ll temp=n;
 while(isPowerOf2(temp)==false){
 cnt++;
 temp=temp-binpow(2,log2(temp));
 }
 cout<<cnt<<"\n";
 }
}
return 0;
}
