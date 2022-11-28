#include <iostream>
using namespace std;
int main()
{
 int num,count=0;
 cout<<"enter the number: ";
 cin>>num;
 if(num==0)
 cout<<"digit is 1";
 else
 {
 while(num!=0)
 {
 num=num/10;
 ++count;
 }
 cout<<"Number of digits is :"<<count;
 }
 return 0;
}
