
#include "ModernCplusplus/project01/Project01.h"
#ifdef _WIN32
#include <windows.h>
struct ConsoleSetup {
    ConsoleSetup() {
        SetConsoleOutputCP(CP_UTF8);
        SetConsoleCP(CP_UTF8);
    }
};
static ConsoleSetup setup;
#endif
int main() {

  auto project01 = Project01();
  project01.print();

  return 0;
}
