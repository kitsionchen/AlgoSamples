#include <string.h>

size_t Strlen(const char *s) {
  const char *sc;
  for (sc = s; *sc != '\0'; ++sc)
    ;
  return (sc - s);
}
