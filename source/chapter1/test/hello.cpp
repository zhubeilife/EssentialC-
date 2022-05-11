#include <iostream>
#include <string>

int main() {
  std::string user_name;

  std::cout << "False"
            << "\t"
            << "\"";

  std::cout << "hello world" << std::endl;
  std::cin >> user_name;
  std::cout << "hello" << user_name;
  return 0;
}
