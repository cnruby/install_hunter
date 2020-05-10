#include <iostream>
#include <fmt/core.h>

int main(int, char**) {
  std::cout << "Hello, Hunter!" << std::endl;
  std::cout << "FMT_VERSION = " << FMT_VERSION << std::endl;  
  fmt::print(" {0: ^{2}} \n"
             " {1:^{3}} \n"
             " {0: ^{2}} \n", "", "世界，你好！", 40, 34);
  //                           0  1             2   3
  return 0;
}