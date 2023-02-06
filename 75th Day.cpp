#include <iostream>
using namespace std;
int main() {
int t;
std::cin >> t;
while(t > 0){
 int n,k;
 std::cin >> n >> k;
 if(n%k==0)
 cout<<n/k<<endl;
 else
 cout<<"-1"<<endl;

 t--;
 }
return 0;
}
