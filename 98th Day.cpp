#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+1;
struct breakfast{
 int c, l, a, r;
 bool operator<(const breakfast& b){
 return c < b.c;
 }
};
int t, n;
breakfast b[N];
int main(){
 ios_base::sync_with_stdio(false);
 cout.tie(0);
 cin.tie(0);
 cin >> t;
 while(t--){
 cin >> n;
 for(int i = 0; i < n; ++i)
 cin >> b[i].a >> b[i].c >> b[i].l >> b[i].r;
 sort(b, b+n);
 vector<int> v;
 int max_l = 0;
 bool fail = false;
 for(int i = 0; i < n; ++i){
 int l, a, r;
 tie(l, a, r) = tie(b[i].l, b[i].a, b[i].r);
 if(r <= max_l){
 cout << "-1\n";
 fail = true;
 break;
 }
 while(!v.empty() && v.back() >= r)
 v.pop_back();
 if(a > max_l){
 int pos = upper_bound(v.begin(), v.end(), a) - v.begin();
 if(pos == v.size())
 v.push_back(a);
 else v[pos] = a;
 }
 max_l = max(max_l, l);
 }
 if(!fail)
 cout << n - v.size() << "\n";
 }
}
