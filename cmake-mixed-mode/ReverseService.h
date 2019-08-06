#include "IReverseService.h"

namespace Mionex
{
  public ref class ReverseService : public IReverseService
  {
  public:
    virtual System::String^ Reverse(System::String^ arg);
  };
}