#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t,n,a;
 cin >> t;
 set<int> s;
 set<int> :: iterator it;
 while(t--){
 cin >> n >> a;
 if(n==1)
 s.insert(a);
 else if(n==2){
 if(s.find(a) != s.end())
 s.erase(a);
 }
 else if(n==3){
 if(s.find(a) != s.end())
 cout << "Yes\n";
 else
 cout << "No\n";
 }
 }
 return 0;
}
