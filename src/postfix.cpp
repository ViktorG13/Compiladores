#include <iostream>
#include "parser.h"
using namespace std;

int main(int argc, char const *argv[])
{
  Parser tradutor;
  try
  {
    tradutor.Start();
  }
  catch (SyntaxError)
  {
    cout << "^\n";
    cout << "Erro de sintaxe";
  }
  cout << endl;
  return 0;
}
