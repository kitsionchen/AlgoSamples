/*
 * 约瑟夫问题 josephus function
 */

#include <stdlib.h>
#include <stdio.h>

typedef struct node *link;

struct node {
    int item;
    link next;
};

int main(int argc, char **argv) {
    int i;
    int N = atoi(argv[1]);
    int M = atoi(argv[2]);

    link t = malloc(sizeof *t);
    link x = t;
    t->item = 1;
    t->next = t;

    for (i = 2; i <= N; i++) {
        x = (x->next = malloc(sizeof *x));
        x->item = i;
        x->next = t;
    }

    while (x != x->next) {
        for (i = 1; i < M; i++)
            x = x->next;
        printf("%d\n", x->next->item);
        x->next = x->next->next;
        N--;
    }

    printf("%d\n", x->item);

    return 0;
}
/*------------------ test result ./a.out 9 5 ---------------------------------
5
1
7
4
3
6
9
2
8
*---------------------------------------------------------------------------*/
