#include <string.h>

/*
 * copy char s2[] to end of s1[]
 */

char * Strcat(char *s1, const char *s2) {
  char *s;

  for (s = s1; *s != '\0'; ++s)
    ;

  for (; (*s = *s2) != '\0'; ++s, ++s2)
    ;

  return (s1);
}
