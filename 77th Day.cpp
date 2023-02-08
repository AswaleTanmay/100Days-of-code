#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
int t;cin>>t;
while(t--){
 long long int n;cin>>n;vector<int> v;
 for(int i=0;i<n;i++){
 long long int num;cin>>num;v.push_back(num);
 }
 sort(v.begin(),v.end());
 long long int ans = (long long int)(v[n-1]-v[0])*v[n-2];
 cout<<ans<<'\n';
}
return 0;
}
