#include<bits/stdc++.h>
using namespace std;
int main(){
int t,N,i;
string s;
cin>>t;
while(t--){
 cin>>N;
 cin>>s;
 for(i=0;i<N;++i)if(s[i]=='1')break;
 if(i==N){
 cout<<0<<endl;
 continue;
 }
 else{
 for(i=1;i<N;++i)if(s[i]=='1'&&s[i-1]=='1')break;
 if(i==N)cout<<1<<endl;
 else cout<<2<<endl;
 }
}
return 0;
}
