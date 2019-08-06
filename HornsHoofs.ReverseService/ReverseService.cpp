#include "ReverseService.h"

#include <string>

using namespace System;
using namespace HornsHoofs;

void MarshalString(String^ input, std::string& output)
{
  using namespace Runtime::InteropServices;
  auto chars = (const char*)(Marshal::StringToHGlobalAnsi(input)).ToPointer();
  output = chars;
  Marshal::FreeHGlobal(IntPtr((void*)chars));
}

ReverseService::ReverseService()
{
  _reverser = new hh::reverser();
}

ReverseService::~ReverseService()
{
  delete _reverser;
}

System::String^ ReverseService::Reverse(String^ arg)
{
  std::string input;
  MarshalString(arg, input);
  auto reversedInput = _reverser->reverse(input);
  return gcnew String(reversedInput.c_str());
}