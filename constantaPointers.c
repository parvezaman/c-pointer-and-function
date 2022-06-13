#include <stdio.h>
int main()
{
    const int a = 5;
    int *p = &a;
    printf("before change a = %d\n", a);
    *p = 10;
    printf("after change a = %d\n", a);

    printf("\n\nanother example where you can not change the constant value:\n");
    const int b = 45;
    const *q = &b; // this means the value/variable q is referint to is a constant but still you can change the value of *p. like still you can change the value of *p; *p = &b; (b is another integer)
    // *q = 30; // you can not do that because *q is a constant pointer.
    printf("%d", b);

    // if you want to make the pointer variable constant as well you get to declare it like: const int * const p = &a;
    // const int *p = &a // value of a can not be changed
    // int *const p = &a // value of p can not be changed
    // const int *const p = &a // both value of p and a can not be changed

    return 0;
}