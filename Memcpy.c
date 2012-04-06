#include <string.h>

/*
 * copy char s2[n] to s1[n] in any order.
 */
void * Memcpy(void *s1, const void *s2, size_t n) {
  char *su1;
  const char *su2;

  for (su1 = s1, su2 = s2; 0 < n; ++su1, ++su2, --n)
    *su1 = *su2;

  return (s1);
}
