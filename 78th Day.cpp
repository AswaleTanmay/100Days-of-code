#include<bits/stdc++.h>
using namespace std;
long long int wt(long long int i,long long int j,long long int k)
{
 return (long long int)(j-i)*(k-j);
 }
int main()
{
 int t;
 cin>>t;
 while(t--){int n;
 cin>>n;
 long long int A[n];
 for(int i=0;i<n;i++)cin>>A[i];
 long long int sum=0L;
 for(int i=0;i<n;i++)
 {
 for(int j=i+2;j<n;j++)
 {
 long long int k=(A[i]+A[j])/2L;
 auto u =upper_bound(A+i+1,A+j-1,k);
 auto l =u-1;
 sum=sum+max(wt(A[i],*u,A[j]),wt(A[i],*l,A[j]));
 }
 }
 cout<<sum<<"\n";
 }
 return 0;
}
