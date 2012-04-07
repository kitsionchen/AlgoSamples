#include <stdlib.h>
#include <stdio.h>

/*
 * 抛硬币试验: 一个硬币抛N次，总共试验M次，输出实验结果。符合正态分布
 */

int heads() {
    return rand() < RAND_MAX/2;
}

int main(int argc, char **argv) {
    int i, j, cnt;
    int N = atoi(argv[1]);
    int M = atoi(argv[2]);
    int *f = malloc((N+1)*sizeof(int));

    for (i = 0; i <= N; i++)
        f[i] = 0;

    for (i = 0; i <= M; i++, f[cnt]++)
        for (cnt = 0, j = 0; j <= N; j++)
            if (heads())
                cnt++;

    for (i = 0; i <= N; i++) {
        printf("%2d ", i);
        for (j = 0; j < f[i]; j+=10) /* 10次正用一个*表示 */
            printf("*");
        printf("\n");
    }

    return 0;
}

/*--------------------- N=32, M=1000 result ------------------------------------------
 0 
 1 
 2 
 3 
 4 
 5 
 6 
 7 *
 8 
 9 *
10 **
11 ***
12 ****
13 ********
14 **********
15 ************
16 **************
17 **************
18 ************
19 *********
20 *********
21 *****
22 **
23 *
24 *
25 *
26 
27 *
28 
29 
30 
31 
32 
*------------------------------------------------------------*/
