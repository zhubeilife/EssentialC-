//
// Created by 张倍 on 2022/7/20.
//
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>

using namespace std;

template<typename IteratorType>
void display(IteratorType first, IteratorType last) {
  for(; first != last; first++) {
    cout << *first << " ";
  }
  cout << endl;
}

void test_insert() {
  int ia[] = {1, 3, 5, 6, 8};

  list<int> lista(ia, ia + 5);
  display(lista.begin(), lista.end());

  lista.insert(lista.begin(), 10);
  display(lista.begin(), lista.end());
}

#include <functional>

void test_function_object() {
  greater<int> a = greater<int>();
  int b;
  std::cout << a(2, 1);
  std::cout << greater<int>{}(3, 6);
}

void test_3_1()
{

}

void test_3_2()
{

}

void test_3_3()
{

}

void test_3_4()
{

}

int main()
{

  return 0;
}
