#include <iostream>
#include <vector>

struct Cat {
  Cat() : name(""), color(""), age(0), weight(0) {}
  Cat(std::string n, std::string c, int a, int w) : name(std::move(n)), color(std::move(c)), age(a), weight(w) {}
  std::string name;
  std::string color;
  int age;
  int weight;
};

void too_many_cats() {
  Cat houseCats[] = {{"Meowmix",    "black", 9, 12},
                     {"Thundercat", "grey",  4, 16}};
  std::cout << houseCats[0].name << std::endl;
  std::cout << houseCats[2].name << std::endl;
}

void write_file(const char *str) {
  char *buff = new char[8];
  strcpy(buff, str);

  FILE *file = fopen("out.txt", "w");
  if (!file)
    return;

  for (char *c = buff; *c; ++c) {
    fputc((int) *c, file);
  }
  delete[] buff;
}

void vector_check() {
  std::vector<int> items;
  items.push_back(1);
  items.push_back(2);
  items.push_back(3);
  std::vector<int>::iterator iter;
  for (iter = items.begin(); iter != items.end(); ++iter) {
    if (*iter == 2) {
      items.erase(iter);
    }
  }
}

int main() {
  too_many_cats();
  write_file(static_cast<const char *>("Hello World"));
  vector_check();
}

/** Errors found with CppCheck:
Cppcheck: (error) invalidContainer: Using iterator to local container 'items' that may be invalid.
Cppcheck: (error) memleak: Memory leak: buff
Cppcheck: (error) bufferAccessOutOfBounds: Buffer is accessed out of bounds: buff
Cppcheck: (error) arrayIndexOutOfBounds: Array 'houseCats[2]' accessed at index 2, which is out of bounds.
This shows that clang cant do it all and a tool like CppCheck can really help
 **/