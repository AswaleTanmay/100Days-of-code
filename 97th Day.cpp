#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 int tt;
 cin>>tt;
 while(tt--){
 int n;
 cin>>n;
 vector<int> ini(n+1);
 vector<int> final(n+1);
 for(int node=1;node<=n;node++){
 cin>>ini[node];
 }
 for(int node=1;node<=n;node++){
 cin>>final[node];
 }
 vector<vector<int>> adj(n+1);
 for(int edge=0;edge<n-1;edge++){
 int u, v;
 cin>>u>>v;
 adj[u].push_back(v);
 adj[v].push_back(u);
 }
 const int OFFSET=1;
 vector<bool> visited(n+1, false);
 vector<vector<int>> memo(n+1, vector<int>(3, -1));
 auto compute=[&](auto &self, int node, int prevOperation)->int{
 if(memo[node][prevOperation+OFFSET]!=-1){
 return memo[node][prevOperation+OFFSET];
 }
 int ans=INT_MAX;
 visited[node]=true;
 for(int currentOperation:{prevOperation, 0, 1}){
 if((currentOperation==final[node]) || (currentOperation==-1 && final[node]==ini[node])){
 int curr=(currentOperation==prevOperation?0:1);
 for(int nei:adj[node]){
 if(visited[nei]==false){
 curr+=self(self, nei, currentOperation);
 }
 }
 ans=min(ans, curr);
 }
 }
 memo[node][prevOperation+OFFSET]=ans;
 visited[node]=false;
 return ans;
 };

 const int ROOT=1;
 cout<<compute(compute, ROOT, -1)<<"\n";

 }
}
