#include <iostream>
using namespace std;
int main() {
int n;
cin>>n;
for(int i=0;i<n;i++)
{
 int x,y;
 cin>>x;
 int cnt=0;
 string s;
 cin>>s;
 for(int j=1;j<x;j++)
 {
 if(s[j-1]=='1' && s[j]=='0')
 cnt++;
 }
 cout<<cnt<<endl;
}
return 0;
}
