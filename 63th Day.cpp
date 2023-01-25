#include <iostream>
using namespace std;
int main()
{
 int T,j;
cin>>T;
for(j=0;j<T;j++)
{
 int w1,w2,x1,x2,m;
 cin>>w1>>w2>>x1>>x2>>m;
 int min = w1+m*x1;
 int max = w1+m*x2;
 if(w2<=max && w2>=min)
 {
 cout<<"1"<<"\n";
 }
 else
 {
 cout<<"0";
 }
}
 return 0;
}
