#include <stdio.h>

int main() {
    int gold, x, y;
    int ben, blackbeard, remaining, each;

    scanf("%d %d %d", &gold, &x, &y);

    ben = gold * x / 100;
    remaining = gold - ben;

    blackbeard = remaining * y / 100;
    remaining = remaining - blackbeard;

    each = remaining / 3;

    printf("%d\n", ben);
    printf("%d\n", blackbeard);
    printf("%d\n", each);

    return 0;
}

*/Sample Input:

729

65

87

Sample Output:

473

222

11*/
