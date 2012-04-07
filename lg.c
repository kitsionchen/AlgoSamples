#include <stdio.h>
int lg(int n) {
    int i;
    for (i = 0; n > 0; i++, n /= 2)
        ;
    return i;
}

int main(int argc, char *argv[]) {
    int i, n = 10;
    for (i = 1, n = 10; i <= 6;  i++, n *= 10)
        printf("%7d %2d %9d\n", n, lg(n), n*lg(n));
    return0;
}
/*------------------------ test result --------------------
     10  4        40
    100  7       700
   1000 10     10000
  10000 14    140000
 100000 17   1700000
1000000 20  20000000
*-------------------------------------------------------*/

