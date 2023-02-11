#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
#define endl "\n"
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int T=1; cin>>T;
while(T--){
ll n; cin>>n;
ll a[n]; map<ll,ll>mp; set<ll>s;
bool ok = true;
for(int i = 0 ; i < n ; i++){
 cin>>a[i];
 mp[a[i]]++;
 s.insert(a[i]);
}
for(auto it = s.begin(); it!=s.end(); it++){
 ll temp = mp[*it];
 if(temp%2){ok=false;}
}
if(ok){cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}
}
return 0;
}
