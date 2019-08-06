#include "ReverseService.h"

using namespace Mionex;

int main()
{
  auto reverseService = gcnew ReverseService();

  System::Console::WriteLine(reverseService->Reverse("Foo Bar"));
	return 0;
}
