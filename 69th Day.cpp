#include <bits/stdc++.h>
using namespace std;
class Isosceles {
public:
void display1()
{
cout << "I am an isosceles triangle \n";
}
};
class Equilateral : public Isosceles {
public:
void display2()
{
cout << "I am an equilateral triangle \n";
}
};
class C : public Equilateral {
public:
void display3()
{
cout << "I am a traingle";
}
};
int main()
{
C obj;
obj.display2();
obj.display1();
obj.display3();
return 0;
}
