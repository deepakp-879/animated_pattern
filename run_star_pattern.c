#include <stdio.h>
#include <unistd.h>

void clearScreen() {
    printf("\033[H\033[J");
}

void printPattern(int step) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if ((i + j + step) % 2 == 0) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() {
    int step = 0;
    while (1) {
        clearScreen();
        printPattern(step);
        step++;
        usleep(200000); // Sleep for 200 milliseconds
    }
    return 0;
}