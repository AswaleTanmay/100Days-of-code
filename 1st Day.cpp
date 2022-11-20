#include <iostream>
using namespace std;
int main()
{
char c;
cout<<"Enter a character: ";
cin>>c;
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
 cout<<"vowel";
else if(!((c>='a' && c<='z') || (c>='A' && c<='Z')))
cout<<"invalid input";
else
 cout<<"consonant";
return 0;
}
