#include <bits/stdc++.h>
using namespace std;
int convert(int b[], int s)
{
int flag = 1;
for (int i = 0; i < s; i++)
{
while (b[i] % 2 == 0)
b[i] /= 2;
while (b[i] % 3 == 0)
b[i] /= 3;
}
for (int i = 1; i < s; i++)
{
if (b[i] != b[0])
{
flag = 0 ;
}
return flag;
}
}
int main()
{
int n, i;
cin>>n;
int a[n];
for(i=0; i<n; i++)
cin>>a[i];
if (convert(a, n) == 1)
cout<<"Yes, possible";
else
cout<<"No, it's not possible";
return 0;
}
