#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 char str1[100],str2[100];
 int f[26]={0}, s[26]={0}, c=0, flag=0;
 cout<<"Enter first string: ";
 cin>>str1;
 cout<<"Enter second string: ";
 scanf("%s",str2);
 while(str1[c] != '\0')
 {
 f[str1[c]-'a']++;
 c++;
 }
 c=0;
 while(str2[c] != '\0')
 {
 s[str2[c]-'a']++;
 c++;
 }
 for(c=0;c<26;c++)
 {
 if(f[c] != s[c])
 flag=1;
 }
 if(flag == 0)
 {
 printf("Anagram.");
 }
 else
 {
 printf("Not Anagram.");
 }
 return 0;
}
