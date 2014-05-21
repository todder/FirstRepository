//============================================================================
// Name        : ctor1.cpp
// Author      : Taras
// Version     :
// Copyright   : No copyright demands
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class X {
int n;
public:
X(int n) : n(n)
{ cout << "X::X():" << n << endl; }
~X() { cout << "X::~X():" << n << endl; }
};
class Y {
X x1, x2;
public:
Y() : x1(1), x2(2)
{ cout << "Y::Y()" << endl; }
~Y() { cout << "Y::~Y()" << endl; }
};
int main() {
Y y;
return 0;
}
