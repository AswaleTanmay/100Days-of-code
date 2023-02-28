#include<iostream>
using namespace std;
int main(){
 int T;
 string S1,S2;
 cin>>T;
 getline(cin,S1);
 while(T--){
 getline(cin,S1);
 getline(cin,S2);
 string Z="";
 for(int i=0;i<S1.size();i++){
 if(S1[i]==S2[i]){
 if(S1[i]=='B'){Z+='W';}
 else{Z+='B';}
 }
 else{
 Z=Z+'B';
 }
 }
 cout<<Z<<endl;
 }
 return 0;
}
