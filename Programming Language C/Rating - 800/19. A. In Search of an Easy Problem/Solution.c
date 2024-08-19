//C Solution:
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 0;
    for ( int i = 0; i < n; i++ ){
        int c;
        scanf("%d", &c);

        if ( c == 1 ) count++;
    }

    if ( count > 0 ) printf("HARD");
    else printf("Easy");

    return 0;
}
