#ifndef CONSOLE_APP
#include <Windows.h>

#include "src/library/static_library.h"

#include <string>

int WINAPI wWinMain(HINSTANCE hInstance,
                    HINSTANCE hPrevInstance,
                    PWSTR lpCmdLine,
                    int nCmdShow) {
  auto result = static_library::get_static_value(10, 20);
  ::MessageBoxA(nullptr, "result", std::to_string(result).c_str(), MB_OK);
  return 0;
}

#else

#include <iostream>

#include "src/library/shared_library.h"

int main(int argc, char* argv[]) {
  std::cout << "value:" << get_shared_value(10, 20) << std::endl;
  getchar();
  return EXIT_SUCCESS;
}

#endif