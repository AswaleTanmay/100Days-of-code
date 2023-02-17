#include <bits/stdc++.h>
using namespace std;
#define int long long
void read (int &x) {
 char ch = getchar(); x = 0; while (!isdigit(ch)) ch = getchar();
 while (isdigit(ch)) x = x * 10 + ch - 48, ch = getchar();
} const int N = 1024, mod = 1e9 + 7;
int n, m, l, f[22][N], x[N * 2], y[N * 2]; char a[N], b[N];
int cnt[N][N];
signed main() {
 int T; read (T);
 while (T--) {
 memset (f, 0, sizeof (f));
 read (n), read (m), read (l);
 scanf ("%s %s", b + 1, a + 1);
 for (int i = 1; i <= m; ++i) read (x[i]);
 for (int i = 1; i <= m; ++i) read (y[i]);
 for (int i = 1; i <= m; ++i) if (x[i] > y[i]) swap (x[i], y[i]);
 for (int i = 1; i <= m; ++i) x[i + m] = y[i], y[i + m] = x[i];
 for (int i = 1; i <= n; ++i) if (a[i] == b[1]) f[1][i] = 1;
 for (int i = 2; i <= l; ++i) {
 for (int j = 1; j <= m * 2; ++j)
 if (a[y[j]] == b[i]) (f[i][y[j]] += f[i - 1][x[j]]) %= mod;
 }
 int res = 0;
 for (int i = 1; i <= n; ++i) (res += f[l][i]) %= mod;
 for (int i = 1; i <= m; ++i) ++cnt[x[i]][y[i]];
 int tag = 1;
 for (int i = 2; i <= l; ++i) if (b[i] != b[1]) tag = 0;
 if (tag) {
 for (int i = 1; i <= m; ++i) {
 if (cnt[x[i]][y[i]] && a[x[i]] == b[1] && a[y[i]] == b[1]) {
 int ans = 1;
 for (int j = 1; j < l; ++j) (ans *= cnt[x[i]][y[i]]) %= mod;
 (res -= ans) %= mod;
 }
 cnt[x[i]][y[i]] = 0;
 }
 }
 for (int i = 1; i <= m; ++i) cnt[x[i]][y[i]] = 0;
 printf ("%lld\n", (res + mod) % mod);
 }
 return 0;
}
