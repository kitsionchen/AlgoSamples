#include <string.h>

/*
 * find first occurence of c in char s[]
 */
char * Strchr(const char *s, int c) {
  const char ch = c;

  for (; *s != ch; ++s)
    if (*s == '\0')
      return (NULL);

  return ((char *)s);
}
