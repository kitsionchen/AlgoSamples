#include <string.h>

/*
 * copy char s2[max n] to s1[n]
 */
char * Strncpy(char *s1, const char *s2, size_t n) {
  char *s;
  for (s = s1; 0 < n && *s2 != '\0'; --n)
    *s++ = *s2++;

  for (; 0 < n; --n)
    *s = '\0';

  return (s1);
}
