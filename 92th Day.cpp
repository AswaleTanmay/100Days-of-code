#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
 int n,m;
 cin>>n>>m;
 long long int mask[n]={0};
 int i,ctr=1,j;
 for(i=0;i<m;i++)
 {
 int size;
 cin>>size;
 for(j=0;j<size;j++)
 {
 int x;
 cin>>x;
 mask[x]=mask[x]|ctr;
 }
 ctr<<=1;
 }
 unordered_map<long long int,int>mctr;
 int ans=0;
 for(i=0;i<n;i++)
{
 if(!mctr[mask[i]])
 ans++;
 mctr[mask[i]]++;
 }
 cout<<ans<<"\n";
 }
 return 0;
}
