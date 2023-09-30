#include "parser.h"
#include <iostream>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;

SyntaxError::SyntaxError()
{
  
}

Parser::Parser()
{
  lookahead = 0;
}

void Parser::Expr()
{
  Term();
  while (true)
  {
    if (lookahead == '+')
    {
      Match('+');
      Term();
      cout << "+";
    }
    else if (lookahead == '-')
    {
      Match('-');
      Term();
      cout << "-";
    }
    else
      return;
  }
}

void Parser::Term()
{
  if (isdigit(lookahead))
  {
    cout << lookahead;
    Match(lookahead);
  }
  else
    throw SyntaxError{};
}

void Parser::Match(char t)
{
  if (t==lookahead)
    lookahead = cin.get();
  else
    throw SyntaxError{};
}

void Parser::Start()
{
  lookahead = cin.get();
  Expr();
  if (lookahead != '\n')
    throw SyntaxError{};
}
