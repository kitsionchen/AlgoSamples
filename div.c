#include <stdio.h>

/*
 * 实现两个正整数的除法，不能用除法操作符。
 */
int div_bad(const int x, const int y) {
    int result = 0;
    int a = x;
    int b = y;
    while (a >= b) {
        result++;
        a -= b;
    }
    return result;
}

int div_good(const int x, const int y) {
    int result = 0;
    int left_num =x;

    while (left_num >= y) {
        int multi = 1;

        while ( y * multi <= (left_num >> 1) ) {
            multi = multi << 1;
        }

        result += multi;
        left_num -= y * multi;
    }

    return result;
}

int div_good2(const int x, const int y) {
    int result = 0;
    int a = x;
    int b = y;

    while (b <= a) {
        int i = 1;

        while (b <= (a >> 1)) {
            b <<= 1;
            i <<= 1;
        }

        a -= b;
        b = y;
        result += i;
    }

    return result;
}

int main(void) {
    printf("%d\n", div_bad(1024, 3));
    printf("%d\n", div_good(1024, 3));
    printf("%d\n", div_good2(1024, 3));

    return 0;
}
