#include <string.h>

/*
 * copy char s2[n] to s1[n] safely
 */
void * Memmove(void *s1, const void *s2, size_t n) {
  char *sc1;
  const char *sc2;

  sc1 = s1;
  sc2 = s2;

  if (sc2 < sc1 && sc1 < (sc2 + n)) { /* copy backwards */
    for (sc1 += n, sc2 += n; 0 < n; --n)
      *--sc1 = *--sc2;
  } else { /* copy forwards */
    for (; 0 < n; --n)
      *sc1++ = *sc2++;
  }

  return (s1);
}

