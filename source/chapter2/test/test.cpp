//
// Created by 张倍 on 2022/7/17.
//
#include <vector>
#include <iostream>

using namespace std;

void display(const std::vector<int> &vec) {
  for (int ix = 0; ix < vec.size(); ++ix) {
    std::cout << vec[ix] << std::endl;
  }
}

void display(const std::vector<int> *vec) {
  if (vec) {
    std::cout << "hello";
  }
}

template<typename elemType>
void display_message(const string &msg, const vector <elemType> &vec) {
  cout << msg;
}

void test_dynamic() {
  int *pi;
  pi = new int(10);
  // c++ 这个指针是指向第一个元素
  int *pia = new int[10];

  for (int i = 0; i < 10; i++) {
    std::cout << pia[i] << std::endl;
    std::cout << *(pia + i) << std::endl;
  }

  delete[] pia;
}

void test_pointer() {
  const vector<int> *(*pfunc)(int);

  // 这个函数数组可以这样理解
  // array 的声明跟变量的声明是一样的
  // 也就是这里直接把 pfunc = pfunc_array[*]
  const vector<int> *(*pfunc_array[])(int) = {};
}

bool get_pentagonal(int size, vector<int> &vec) {
  const int max_size = 1024;
  if (size > max_size) {
    cout << "opps too much\n";
    return false;
  }

  for (int i = 1; i < size + 1; i++) {
    vec.push_back( i*(3*i - 1) / 2 );
  }

  return true;
}

int get_pentagonal_with_static(int pose) {
  static vector<int> vec(128);

  if (pose > vec.size()) {
    // extern the size
    for (int i = vec.size(); i < pose; i++) {
      // do something here
    }
  }

  return vec[pose - 1];
}

void test_2_2() {
  vector<int> a;
  get_pentagonal(10, a);
  display(a);
}

int main() {
  test_2_2();
  return 0;
}