#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;

    printf("value -> %d, address -> %d\n", a, &a);
    printf("value -> %d, address -> %d\n", p, &p);
    printf("value -> %d, address -> %d\n", q, &q);
    printf("value -> %d, address -> %d\n", r, &r);

    printf("\nAccess value of a by p and q\n");
    printf("value of a = %d\n", *p);
    printf("value of a = %d\n", **q);
    printf("value of a = %d\n", ***r);

    printf("\nchange value by pointer:\n");
    ***r = 5;
    printf("value of a = %d\n", *p); // and you can access value of 'a' by any of those four variables

    return 0;
}

/*
value -> 10, address -> -1447036884
value -> -1447036884, address -> -1447036896
value -> -1447036896, address -> -1447036904
value -> -1447036904, address -> -1447036912

Access value of a by p and q
value of a = 10
value of a = 10
value of a = 10
*/