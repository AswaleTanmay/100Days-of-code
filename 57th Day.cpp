#include <iostream>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
 int n,x,p;
cin>>n>>x>>p;
 int marks=4*x-n;
 if(marks>=p){
cout<<"pass"<<'\n';
 }
else{
cout<<"fail"<<'\n';
 }
}
return 0;
}
