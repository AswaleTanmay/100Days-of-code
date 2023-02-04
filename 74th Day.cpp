#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 ll t;
 cin >> t;
 while (t--)
 {
 int n, m;
 cin >> n >> m;
 if (n%2==0 && m%2==0)
 {
 cout << 0 << endl;
 }
 else if (n%2==0 && m%2!=0)
 {
 cout << n << endl;
 }
 else if (n%2!=0 && m%2==0)
 {
 cout << m << endl;
 }
 else
 {
 cout << n+m-1 << endl;
 }
 }
 return 0;
}
