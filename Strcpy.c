#include <string.h>

char * Strcpy(char *s1, const char *s2) {
  char *s;

  for (s = s1; (*s++ = *s2++) != '\0';)
    ;

  return (s1);
}
