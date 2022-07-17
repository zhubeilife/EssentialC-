#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>

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

void test_read_and_write() {
  std::ofstream outfile("seq_data.txt", std::ios_base::app);
  if ( !outfile ) {
    std::cerr << "something wrong with it";
  }
  else {
    outfile << "append file to it"
            << std::endl;
  }
}

void test_1_5_cstyle() {
  int num_size = 128;
  char name[num_size];
  std::cout << "Please Input the name";
  std::cin >> std::setw(num_size) >> name;
  std::cout << "Get:" << name;
}

void test_1_7() {
  std::ifstream in_file("input.txt");
  if (!in_file) {
    std::cerr << "Failed to open the file";
    return;
  }

  std::string word;
  while (in_file >> word) {
    std::cout << word << std::endl;
  }
}

void test_1_8() {
  char* show_message[] = {
      "hello",
      "world"
  }
}

int main() {
  test_1_7();
  return 0;
}
