//C Solution:
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for ( int i = 0; i < t; i++ ){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if ( a >= b ){
            if ( c == a + b || c == a - b ){
                printf("YES\n");
            }
            else {
                printf("NO\n");
            }
        }
        else {
            if ( c == b - a || c == b + a ){
                printf("YES\n");
            }
            else {
                printf("NO\n");
            }
        }
    }

    return 0;
}