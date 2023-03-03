#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--){
 long long n,m;
 cin >> n >> m;
 vector<pair<long long, long long> > v;
 long long li, ri;
 for(int i=0; i<m; i++){
 cin >> li >> ri;
 v.push_back(make_pair(li,ri));
 }
 sort(v.begin(),v.end());
 long long minTime = 1;
 long long maxTime = n-1;

 long long mid;
 long long ans = -1;

 while(minTime <= maxTime){
 mid = minTime + ((maxTime - minTime) / 2);
long long cur = 1, i = 0;
 multiset<long long> e;

 while(cur < n){

 while(i<m && v[i].first <= cur){
 e.insert(v[i].second);
 i++;
 }

 while(!e.empty() && *e.begin() <= cur){
 e.erase(e.begin());
 }

 if(e.empty()){
 break;
 }

 long long x = *e.begin();
 e.erase(e.begin());
 cur = min(cur+mid,x);

 }

 if(cur == n){
 maxTime = mid - 1;
 ans = mid;
 } else {
 minTime = mid + 1;
 }
 }

 cout << ans <<"\n";

}
return 0;
}
