#include <iostream>

constexpr size_t length(const char *s) {
  size_t res = 0;
  while (*(s++))
    ++res;
  return res;
}

int main() {
  std::cout << length("abc") << std::endl;
  char s[] = "runtime";
  std::cout << length(s) << std::endl;
  return 0;
}