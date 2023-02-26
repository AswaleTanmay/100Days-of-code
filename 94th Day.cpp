#include <cstdio>
#include <bitset>
#include <vector>
using namespace std;
int n, m, k;
bitset<500> f[30][500];
void Prep()
{
for (int j = 1; j <= 29; ++j)
 for (int i = 0; i < n; ++i)
 for (int k = 0; k < n; ++k)
 if (f[j-1][i][k])
 f[j][i] |= f[j-1][k];
}
bitset<500> Query(int st, int t)
{
 bitset<500> s, v;
 s[st] = true;
 for (int j = 29; j >= 0; --j)
 if (t - (1 << j) >= 0)
 {
 t -= 1 << j;
 v.reset();
 for (int i = 0; i < n; ++i)
 if (s[i]) v |= f[j][i];
 s = v;
 }
 return s;
}
int main()
{
 scanf("%d",&n);
 for (int i = 0; i < n; ++i)
 for (int j = 0, tmp; j < n; ++j)
 {
 scanf("%d",&tmp);
 if (tmp) f[0][i][j] = true;
 }
 Prep();
 scanf("%d",&m);
 for (int i = 0, x; i < m; ++i)
 {
 scanf("%d%d",&k,&x);
 bitset<500> r = Query(x-1, k);
 vector<int> res;
 for (int j = 0; j < n; ++j)
 if (r[j]) res.push_back(j);
 printf("%d\n",(int) res.size());
 if (res.empty()) printf("-1");
 else
 for (int j = 0; j < (int) res.size(); ++j) printf("%d ",res[j]+1);
 printf("\n");
 }
 return 0;
}
