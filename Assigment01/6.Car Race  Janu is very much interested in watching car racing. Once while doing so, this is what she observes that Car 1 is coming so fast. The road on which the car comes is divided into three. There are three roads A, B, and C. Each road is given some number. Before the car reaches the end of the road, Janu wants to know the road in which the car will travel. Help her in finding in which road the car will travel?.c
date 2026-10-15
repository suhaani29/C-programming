#include <stdio.h>

int main() {
    int a, b, c, cars;

    scanf("%d %d %d %d", &a, &b, &c, &cars);

    if (cars != 0 && a % cars == 0) {
        printf("Car 1 goes into road A");
    } else if (cars != 0 && b % cars == 0) {
        printf("Car 1 goes into road B");
    } else if (cars != 0 && c % cars == 0) {
        printf("Car 1 goes into road C");
    } else {
        printf("No path exists");
    }

    return 0;
}

*/SAMPLE INPUT:

243

136

567

17

SAMPLE OUTPUT:

Car 1 goes into road B*/
