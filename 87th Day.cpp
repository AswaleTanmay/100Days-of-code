#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
 int t;
 cin>>t;
 while(t--)
 {
 int n;
 cin>>n;
 int A[n];
 for(int i=0;i<n;i++)
 cin>>A[i];
 int ans=0;
 int a=0;
 for(int i=1;i<n;i++)
 {
 if(A[i]<A[a])
 {
 ans+=(i-a+1)*A[a]-A[i];
 a=i;
 }
 }
 if(a!=n-1)
 ans+=(n-1-a+1)*A[a]-A[n-1];
 if(ans>0)
 cout<<ans<<endl;
 else
 cout<<0<<endl;
}
}
