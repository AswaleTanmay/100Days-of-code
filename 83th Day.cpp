#include<bits/stdc++.h>
using namespace std;
#define q 1000000007
int main()
{
 long long int t,n,i,j;
 cin>>t;
 while(t!=0)
  {
 n=(1<<t) - 1;

 long long int a[n+1];
 double b[n+1];
 for(i=1;i<=n;i++){cin>>a[i];b[i]=a[i];}

 for(i=n/2;i>0;i--)
 {
 if(b[2*i +1]>b[2*i]){a[i]=a[i]*a[2*i+1];b[i]=b[i]*b[2*i+1];}
 else {a[i]=(a[i]*a[2*i]);b[i]=(b[i]*b[2*i]);}

 a[i]%=q;

 }
 cout<<a[1]<<endl;
 cin>>t;
 }
 return 0;
}
