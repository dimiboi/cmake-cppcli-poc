#include "ReverseService.h"

#include <string>

#include <reverser.h>

using namespace System;
using namespace Mionex;

void MarshalString(String^ input, std::string& output)
{
  using namespace Runtime::InteropServices;
  auto chars = (const char*)(Marshal::StringToHGlobalAnsi(input)).ToPointer();
  output = chars;
  Marshal::FreeHGlobal(IntPtr((void*)chars));
}

System::String^ ReverseService::Reverse(String^ arg)
{
  mx::reverser reverser;
  std::string input;
  MarshalString(arg, input);
  auto reverseInput = reverser.reverse(input);
  return gcnew String(reverseInput.c_str());
}