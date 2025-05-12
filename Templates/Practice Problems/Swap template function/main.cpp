#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

// Generic swap function using templates
template <class T>
void swapValues(T &a, T &b)
{
     a = a + b;
     b = a - b;
     a -= b;
}

int main()
{
     // Integer
     int a = 2,
         b = 5;

     cout << "Before Swap -> Type: " << typeid(a).name() << endl
          << "a: " << a << ", b: " << b << endl;

     swapValues(a, b);

     cout << "After Swap: " << endl
          << "a: " << a << ", b: " << b << endl;

     // Float
     float c = 4.6,
           d = 3.1;

     cout << endl;

     cout << "Before Swap -> Type: " << typeid(c).name() << endl
          << "c: " << c << ", d: " << d << endl;

     swapValues(c, d);

     cout << "After Swap: " << endl
          << "c: " << c << ", d: " << d << endl;

     // Char
     char e = '@',
          f = '$';

     cout << endl;

     cout << "Before Swap -> Type: " << typeid(e).name() << endl
          << "e: " << e << ", f: " << f << endl;

     swapValues(e, f);

     cout << "After Swap: " << endl
          << "e: " << e << ", f: " << f << endl;

     return 0;
}