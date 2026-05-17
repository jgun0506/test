#include <stdio.h>
// A global variable, defined and
// initialized here in bar.c.
// We force internal linkage by
// using the static specifier.
static int counter = 100;
void bar() {
 counter++;
 printf("(b): counter = %d\n",
 counter);
}

