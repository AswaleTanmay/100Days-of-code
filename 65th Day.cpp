#include <iostream>
using namespace std;
int main() {
int t;
cin>>t;
while(t--)
{
 int n,b;
 cin>>n>>b;
 int max=-1;
 for(int i=0;i<n;i++)
 {
 int width,height,price;
 cin>>width>>height>>price;
 int area=width*height;
 if(price<=b)
 {
 if(area>max)
 max=area;
 }
 }
 if(max==-1)
 cout<<"no tablet\n";
 else
 cout<<max<<"\n";
}
return 0;
}
