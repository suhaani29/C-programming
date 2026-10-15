#include <stdio.h>

int main() {
    float principal, rate, years;
    float interest, amount, discount, settlement;

    scanf("%f %f %f", &principal, &rate, &years);

    interest = principal * rate * years / 100;
    amount = principal + interest;
    discount = interest * 0.02;
    settlement = amount - discount;

    printf("%.2f\n", interest);
    printf("%.2f\n", amount);
    printf("%.2f\n", discount);
    printf("%.2f\n", settlement);

    return 0;
}

*/SAMPLE INPUT:

100

1

10

SAMPLE OUTPUT:

10.00

110.00

0.20

109.80*/
