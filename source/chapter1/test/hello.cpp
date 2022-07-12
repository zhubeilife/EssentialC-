#include <iostream>
#include <string>
#include <vector>

void test_input() {
  std::string user_name;
  std::string first_name;

  std::cout << "False"
            << "\t"
            << "\"";

  std::cout << "hello world" << std::endl;
  std::cin >> user_name;
  std::cin >> first_name;

  std::cout << "hello" << user_name;
}

void test_container() {
  const int seq_size = 18;
  int pell_array[seq_size];
  std::vector<int> pell_vector;
  std::cout << pell_vector.size();
  pell_vector.push_back(123);
  std::cout << pell_vector.size();
}

void test_pointer() {
  int ival = 1024;
  int *pi = &ival;
}

int main() {
  test_pointer();

  return 0;
}
