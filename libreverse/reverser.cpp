#include <reverser.h>

#include <algorithm>

using namespace mx;

std::string reverser::reverse(std::string arg)
{
  std::reverse(arg.begin(), arg.end());
  return arg;
}