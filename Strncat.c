#include <string.h>

/*
 * coy char s2[max n] to end of s1[]
 */
char * Strncat(char *s1, const char *s2, size_t n) {
  char *s;

  for (s = s1; *s != '\0'; ++s)
    ;

  for (; 0 < n && *s2 != '\0'; --n)
    *s++ = *s2++;

  *s = '\0';
  return (s1);
}
