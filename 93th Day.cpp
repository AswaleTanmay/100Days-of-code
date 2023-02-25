#include<bits/stdc++.h>
using namespace std;
const int maxw = 2005;
int main()
{
int N;
cin>>N;
string a[N];
bitset<maxw>b, q[N];
for(int i=0;i<N;i++)
{
 cin>>a[i];
 for(int j=0;j<N;j++)
 {
 q[i][j] = a[i][j] - '0';
 }
 q[i][i] = 0;
}
int res = 0;
for(int i=0;i<N;i++)
{for(int j=i+1;j<N;j++)
 {
 b = q[i]&q[j];
 if(q[i][j]==0 && b.count()>=1 )
 {
  res+=2;
 }

 }
 }
 cout<<res<<endl;
}
