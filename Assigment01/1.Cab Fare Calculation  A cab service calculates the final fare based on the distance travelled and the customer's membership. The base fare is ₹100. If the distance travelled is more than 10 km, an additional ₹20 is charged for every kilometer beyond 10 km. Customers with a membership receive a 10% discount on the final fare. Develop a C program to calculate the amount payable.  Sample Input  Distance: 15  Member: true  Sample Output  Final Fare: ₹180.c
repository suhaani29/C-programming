#include <stdio.h>

int main() {
    float distance, fare = 100;
    int member;

    scanf("%f %d", &distance, &member);

    if (distance > 10) {
        fare += (distance - 10) * 20;
    }

    if (member == 1) {
        fare = fare * 0.90;
    }

    printf("Final Fare: Rs.%.0f", fare);

    return 0;
}


*/distance = 15 km and member = 1, so the fare is ₹180/*
