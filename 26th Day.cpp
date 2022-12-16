#include <iostream>
using namespace std;
int main()
{
 int num;
 cout<<"Enter the number of people in the room: ";
 cin>>num;
 int total = num * (num-1) / 2;
 cout<<"Total handshakes = "<<total;
 return 0;
}
