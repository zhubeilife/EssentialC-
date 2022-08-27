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

#include <map>
#include <set>
#include <string>
#include <fstream>
#include <fstream>
#include <iostream>

int test_3_1()
{
  ifstream ifile("something");
  ofstream ofile("something");

  if (!ifile || !ofile) {
    std::cerr << "something worng with it";
    return -1;
  }

  static string _excluded_words[25] = {
      "the","and","but","that","then","are","been", "can","a","could","did","for", "of", "had","have","him","his","her","its","is", "were","which","when","with","would"

  };
  set<string> exclude_set(_excluded_words, _excluded_words + 25);

  std::map<std::string, int> word_cout;

  string word;
  while (ifile >> word) {
    if (exclude_set.count(word)) {
      word_cout[word]++;
    }
  }

  for (auto iter : word_cout) {
    std::cout << iter.first << " " << iter.second;
//    std::cout << "hello";
  }

  return 0;
}

void test_3_2()
{
  // fake one
}

void test_3_3()
{
  // fake one
}

void test_3_4()
{
  istream_iterator<int> in(std::cin), eof;
  vector<int> input;
  copy(in, eof, back_inserter(input));

}

int main()
{
  set<string> try_set;
  std::cout << &try_set << std::endl;
  return 0;
}
