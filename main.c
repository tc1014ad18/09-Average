#include <stdio.h>

int main() {
    int n = 0;
    int a;
    int sum = 0;
    double average = 0.0;
    printf("Hullo, Mate! Want to see a trick?\n");
    printf("Keep giving me numbers and I will show you their average once yo enter a 0 (zero).\n");

    do {
        printf("Give me a number: ");
        scanf("%d", &a);
        if (a != 0) {
            sum += a;
            n++;
        }
    } while (a != 0);

    if (n == 0) {
        printf("You didn't give me any number, mate! I can't work like that!\n");
    } else {
        average = (double) sum / (double) n;
        printf("You game me %d numbers and their average is: %lf\n", n, average);
    }
    printf("See you around, mate!");

    return 0;
}