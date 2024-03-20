#include <stdio.h>
int main() {
    int play[10];
    int position[10];
    int score = 0;
    for (int i=0; i<10; i++) {
        scanf("%d", &play[i]);
        position[i] = 0;
    }

    for (int i=0; i<10; i++) {
        for (int j=0; j<=i; j++) {
            position[j] += play[i];
        }
    }
    for (int i=0; i<10; i++) {
        if (position[i] >= 4) {
            score++;
        }
    }
    printf("score = %d", score);
}