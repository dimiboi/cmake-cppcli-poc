#pragma once

#include "IReverseService.h"

#include <reverser.h>

namespace HornsHoofs
{
  public ref class ReverseService : public IReverseService
  {
  public:
    ReverseService();
    ~ReverseService();
  public:
    virtual System::String^ Reverse(System::String^ arg);
  private:
    hh::reverser* _reverser;
  };
}