#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
  for (int i = 1; i < argc; i++)
  {
    cout << argv[i] << endl;
  }  
  return 0;
}
