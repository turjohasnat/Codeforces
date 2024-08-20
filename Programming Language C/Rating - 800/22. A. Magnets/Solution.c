//C Solution:
#include <stdio.h>

int main() {
    int magnets;
    scanf("%d", &magnets);

    int positions[magnets];
    int count = 0;
    for ( int i = 0; i < magnets; i++ ){
        scanf("%d", &positions[i]);

        if ( positions[i] == 10 || positions[i] == 01 ){
            if ( positions[i-1] == positions[i])
            continue;
        }

        count++;
    }
    printf("%d", count);

    return 0;
}
