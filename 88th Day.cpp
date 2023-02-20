#include <bits/stdc++.h>
using namespace std;
#define N 100500
struct Data{
 int n;
 int a[N], p[N];
 Data (int n = 0) : n(n) {}
 void turn(int k) {
 k %= n;
 if (k < 0) k += n;
 for (int i = k + 1; i <= n; i++) p[i - k] = a[i];
 for (int i = 1; i <= k; i++) p[n - k + i] = a[i];
 for (int i = 1; i <= n; i++) a[i] = p[i];
 for (int i = 1; i <= n; i++) p[a[i]] = i;
 }
 void swp(int i, int j) {
 swap(a[i], a[j]);
 swap(p[a[i]], p[a[j]]);
 }
 void update(int k) {
 for (int i = 1; i <= n && k; i++) {
 if (a[i] != i) {
 int t = p[i];
 swp(i, t);
 k--;
 }
 }
 }
} ans, tmp, now, prv;
void cpy(Data &A, Data &B) {
 A.n = B.n;
 for (int i = 1; i <= A.n; i++) A.a[i] = B.a[i];
 for (int i = 1; i <= A.n; i++) A.p[i] = B.p[i];
}
bool chkmin() {
 int f = 0;
 for (int i = 1; i <= ans.n; i++) if (ans.a[i] > tmp.a[i]) { f = 1; break; } else if (ans.a[i] < tmp.a[i]) return 0;
 if (f) cpy(ans, tmp);
 return f;
}
void solve() {
 int n;
 scanf("%d", &n);
 now.n = n;
 for (int i = 1; i <= n; i++) {
 scanf("%d", &now.a[i]);
 }
 now.turn(0);
 cpy(ans, now);
 for (int i = 1; i <= 3; i++) for (int j = 1; j <= 3; j++) {
 cpy(tmp, now);
 tmp.turn(tmp.p[i] - j);
 tmp.update(2);
 chkmin();
 }
 for (int i = 1; i <= n; i++) printf("%d%c", ans.a[i], " \n"[i == n]);
}
int main() {
 int tc;
 scanf("%d", &tc);
 while (tc--) solve();
 return 0;
}
