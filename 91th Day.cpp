#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t, n;
 cin >> t;
 while (t--)
 {
 cin >> n;
 map<string, pair<string, string>> p;
 string s1, s2, s3, s4;
 set<string> s;
 int x, cost = 0;
 for (int i = 1; i < n; i++)
 {
 cin >> s1 >> s2 >> s3;
 x = stoi(s3.substr(0, s3.length() - 1));
 p[s1] = {s2, s3};
 cost += x;
 if (s.find(s1) == s.end())
 s.insert(s1);
 else
 s.erase(s1);
 if (s.find(s2) == s.end())
 s.insert(s2);
 else
 s.erase(s2);
 }
 s3 = ((p.find(*s.begin()) != p.end()) ? *s.begin() : *s.rbegin());
 while (p.find(s3) != p.end())
 {
 cout << s3 << " " << p[s3].first << " " << p[s3].second << "\n";
 s3 = p[s3].first;
 }
 cout << cost << "$\n";
 }
 return 0;
}
