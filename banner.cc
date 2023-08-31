#include <iostream>
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