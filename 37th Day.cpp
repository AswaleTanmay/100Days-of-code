#include <iostream>
#include<string.h>
using namespace std;
int main()
{
 char str[100];
 int i;
 int frequency[256] = {0};
 cout<<"Enter a string: ";
 gets(str);
 for(i = 0; str[i] != '\0'; i++)
 {
 frequency[str[i]]++;
 }
 for(i = 0; i < 256; i++)
 {
 if(frequency[i] != 0)
 {
 printf("The frequency of %c is %d\n", i, frequency[i]);
 }
 }
 return 0;
}
