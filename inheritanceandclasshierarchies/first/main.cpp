#include <iostream>

class Base {};
class Derived : public Base {};
int main() {
  //   Derived *d = new Derived;
  //   Base *b = d; // implicit conversion

  Base *b = new Derived;
  // Derived *d = b; // Does not compile, not implicit Derived

  Derived *d1 = static_cast<Derived *>(b);
  return 0;
}