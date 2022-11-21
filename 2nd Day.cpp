// Take Input from User and Print Alphabet or Not an alphabet or invalid Input.


#include <iostream>
using namespace std;
int main()
{
 char c;
 cout<<"Enter a character: ";
 cin>>c;
 if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
 cout<<"Alphabet";
 else
 cout<<"Not an alphabet";
 return 0;
}

