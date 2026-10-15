#include <stdio.h>

int main() {
    int experience, performance;

    scanf("%d %d", &experience, &performance);

    if (experience > 7 && performance >= 85) {
        printf("Level: Senior");
    } else if (experience >= 3 && experience <= 7 &&
               performance >= 80) {
        printf("Level: Mid-Level");
    } else {
        printf("Level: Junior");
    }

    return 0;
}

*/Sample Input

Experience: 9

Performance: 88

Sample Output

Level: Senior*/
