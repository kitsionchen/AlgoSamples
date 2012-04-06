#include <string.h>

/*
size_t Strspn(const char *s1, const char *s2) {
  const char *sc1;
  const char *sc2;

  for (sc1 = s1; *sc1 != '\0'; ++sc1)
    for (sc2 = s2; ; ++sc2)
      if (*sc2 == '\0')
	return (sc1 - s1);
      else if (*sc1 == *sc2)
	break;

  return (sc1 - s1);
}
*/

size_t Strspn(const char *s1, const char *s2) {
  const char *sc1;
  const char *sc2;
  for (sc1 = s1, sc2 = s2; *sc2 != '\0' && *sc1 != '\0' && *sc1++ == *sc2++;)
    ;

  return (sc1 - s1);
}

