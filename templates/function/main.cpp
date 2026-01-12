#include <iostream>
template <typename T>

T increment(T x) {
  return x + 1;
}

int main() {
  std::cout << increment(4) << std::endl;   // 5
  std::cout << increment(5.2) << std::endl; // 6.2
  char c[10] = "Nagendra";
  std::cout << increment(c) << std::endl; // &c[1]
  return 0;
}