//C Solution:
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for ( int i = 0; i < t; i++ ){
        int a, b;
        scanf("%d %d", &a, &b);

        int reminder = a % b;

        int move;
        if ( reminder == 0 ){
            move = 0;
        }
        else {
            move = b - reminder;
        }
        printf("%d\n", move);
    }
    return 0;
}