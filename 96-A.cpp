#include <iostream>
#include <string>

int main() {
  std::string s;
  std::cin >> s;
  if(s.size()<8){
    std::cout << "NO" << std::endl;
    return 0;
  }
  for (int i = 0; i < s.size() - 6; i++) {
    bool is_dangerous = true;
    for (int j = i; j < i + 7; j++) {
      if (s[j] != s[i]) {
        is_dangerous = false;
        break;
      }
    }
    if (is_dangerous) {
      std::cout << "YES" << std::endl;
      return 0;
    }
  }

  std::cout << "NO" << std::endl;
  return 0;
}

