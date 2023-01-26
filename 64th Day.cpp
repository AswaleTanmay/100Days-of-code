#include <iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--){
 string s;cin>>s;
 bool found=false;
 if(s.find("101")!=string::npos||s.find("010")!=string::npos ){
 found=true;
 }
 cout<<(found ? "Good":"Bad");
 cout<<endl;
 }
return 0;
}
