#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void test_stream()
{
  char ch1, ch2;
  int bp, len;

  // given the input:
  string show("( 3 , 6 ) 6, 10, 15, 21, 28, 36 ");
  stringstream ss(show);

  ss >> ch1 >> bp >> ch2 >> len;
  cout << ch1 << " " << bp << " "  << ch2 << " " << len;
  cout << ss.str();
}

int main()
{

  return 0;
}
