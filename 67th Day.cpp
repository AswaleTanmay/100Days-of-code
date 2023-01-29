#include <iostream>
using namespace std;
int main()
{
int t;
int count=0;
cin>>t;
while(t--)
{ int count=0;
 int s,a,b,c;
 cin>>s>>a>>b>>c;
 if((a+b+c)<=s)
 {
 count=1;
 }
 else if((a+b)<=s || (c+b)<=s)
 {
 count = 2;
 }
 else
 {
 count=3;
 }
 cout<<count<<endl;
}
return 0;
}
