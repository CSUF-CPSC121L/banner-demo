#include <iostream>
// TODO: Include your header files here

// TODO: Provide function definition here
void DrawBanner(const std::string& text) {
  int length = text.length() + 4;
  for (int i = 0; i < length; i++) {
    std::cout << "*";
  }
  std::cout << "\n* " << text << " *\n";
  for (int i = 0; i < length; i++) {
    std::cout << "*";
  }
  std::cout << "\n";
}