#include <iostream>

using namespace std;

class data1{
public:
  void has()
  {
    cout << "do nothing" << endl;
  }
};

class data2{
public:
  void nothas()
  {
    cout << "do something" << endl;
  }
};


template<typename elemType>
class TemplateTest {
public:
  elemType data;
  TemplateTest(elemType data) : data(data){}

  void test()
  {
    data.has();
  }
};


void test_template_error() {
  data1 data_ins_1;
  TemplateTest<data1> test1(data_ins_1);
  test1.test();

//  data2 data_ins_2;
//  TemplateTest<data2> test2(data_ins_2);
//  test2.test();
}


//template <typename elemType>
//ostream& operator<<(ostream &os, elemType& elem)
//{
//  os << "hello world" << elem << endl;
//  return os;
//}

template<typename elemType>
void test_function_template() {
  std::cout << typeid(elemType).name() << std::endl;
}

template<typename elemType>
void test_function_template2(elemType& ele) {
  std::cout << typeid(elemType).name() << std::endl;
}

void test_function_template2(double i) {
  std::cout << "the compiler will choose this one first" << endl;
}

void test_template() {
  test_function_template<std::string>();
  test_function_template<int>();
  double i = 1.11;
  // template deduction
  test_function_template2<>(i);
  test_function_template2(i);
}

int main() {
  test_template();
  return 0;
}