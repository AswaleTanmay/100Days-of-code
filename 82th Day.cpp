#include <iostream>
#include <vector>
using namespace std;
int main() {
int t;cin >> t;
while(t--){
 int n;cin >> n;
 string res = "";
 for(int i = 0;i < n;i++)res += "0";
 vector<string> binary(n);
 for(int i = 0;i< n;i++)cin >> binary[i];
 for(int i = 0;i < n;i++){
 if(binary[i][i] == '0')res[i] = '1';
 }
 cout << res << endl;
}
return 0;
}
