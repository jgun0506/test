#include <stdio.h>
// A global variable, defined and
// initialized here in foo.c.
// We force internal linkage by
// using the static specifier.
static int counter = 1;
void bar();
int main(int argc, char** argv) {
 printf("%d\n", counter);
 bar();
 printf("%d\n", counter);
 return 0;
}
