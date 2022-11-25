#include <iostream>
using namespace std;
int main()
{
 int x, y;
 cout<<"Enter the value for x and y: ";
 cin>>x>>y;
 if (x > 0 && y > 0)
 cout<<"This point lies in the first quadrant.";
 else if (x < 0 && y > 0)
 cout<<"This point lies in the second quadrant.";
 else if (x < 0 && y < 0)
 cout<<"This point lies in the third quadrant.";
 else if (x > 0 && y < 0)
 cout<<"This point lies in the fourth quadrant.";
 else if (x == 0 && y == 0)
 cout<<"This point lies at the orgin.";
 return 0;
}
