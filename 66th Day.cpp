#include <iostream>
#include <algorithm>
using namespace std;
int main() {
 int n;
 cin >> n;

 while(n--)
 {
 string s1="", s2="";
 cin >> s1 >> s2;
 int flag = 0;
 for(int i=0; i<s1.size(); i++)
 {
 for(int j=0; j<s2.size(); j++)
 {
 if(s1[i] == s2[j])
 flag++;
 }
 }

 if(flag > 0)
 cout << "Yes" << endl;
 else
 cout << "No" << endl;
 }
return 0;
}
