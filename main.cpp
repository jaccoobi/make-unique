#include <string>
#include <vector>

bool isUnique(std::string str) {
  std::vector<char> knownCharacters;
  for (char c : str) {
    for (char known : knownCharacters) {
      if (known == c) {
        return false;
      }
    }
    knownCharacters.insert(knownCharacters.end(), c);
  }

  return true;
}

int main(int argc, char *argv[]) {
  return 0;
}
