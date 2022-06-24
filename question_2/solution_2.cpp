#include <iostream>
using namespace std;

int main() {
  for (int i = 1; i <= 100; i++) {
      if (i % 3 == 0 || i % 5 == 0) {
          if (i % 3 == 0 && i % 5 == 0) {
              printf("FooBaa\n");
          }
          else {
              if (i % 3 == 0) {
                  printf("Foo\n");
              }
              else {
                  printf("Baa\n");
              }
          }
      }
      else {
          printf("%d\n",i);
      }
  }
  return 0;
}