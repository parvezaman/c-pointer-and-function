#include <stdio.h>

int main()

{
    int a = -1, b = -a;
    int x, y;
    x = (a > 0) && (b < 0) || (a < 0) && (b > 0);
    y = (a <= 0) || (b >= 0) && (a >= 0) || (b <= 0);
    printf("%d %d", x, y);

    return 0;
}
