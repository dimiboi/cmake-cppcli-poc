#pragma once

namespace HornsHoofs
{
  public interface class IReverseService : public System::IDisposable
  {
    System::String^ Reverse(System::String^ arg);
  };
}