#include <iostream>
using namespace std;
#include<math.h>
int main() {
 double a, b, c, d, root1, root2, real, imag;
 cout<<"Enter value of a, b and c: ";
 cin>>a>>b>>c;
 d = b * b - 4 * a * c;
 if (d > 0) {
 cout<<"There are two Real Roots\n";
 root1 = (-b + sqrt(d)) / (2 * a);
 root2 = (-b - sqrt(d)) / (2 * a);
 cout<<"root1 ="<<root1<<"root2 = "<<root2;
 }
 else if (d == 0) {
 cout<<"Roots are equal\n";
 root1 = root2 = -b / (2 * a);
 cout<<"root1 = root2 = "<<root1;
 }
 else {
 real = -b / (2 * a);
 imag = sqrt(-d) / (2 * a);
 cout<<"No Real Roots\n";
 cout<<"root1 = "<<real<<"+"<<imag<<" root2 = "<<real<<"-"<<imag;
 }
 return 0;
}66
