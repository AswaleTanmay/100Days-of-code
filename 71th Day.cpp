#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--)
{
 int n;
 cin>>n;
 map<int,int>m;

 for(int i=0;i<n;i++)
 {
 int x;
 cin>>x;
 m[x]++;
 }
 vector<int>v(n);
 int i=0,sum=0;
 for(auto it:m)
 {
 if(i!=0)
 v[i]=v[i-1]+it.second;

 if(i==0)v[i]=it.second;

 if(v[i]>n-v[i])
 {
 sum+=it.second;
 }
 i++;
 }
 cout<<sum<<endl;
}
return 0;
}
