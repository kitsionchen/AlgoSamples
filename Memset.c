#include <string.h>

/*
 * store c througout unsigned char s[n]
 */
void * Memset(void *s, int c, size_t n) {
  const unsigned char uc = c;
  unsigned char *su;

  for (su = s; 0 < n; --n) 
    *su = uc;

  return (s);
}
