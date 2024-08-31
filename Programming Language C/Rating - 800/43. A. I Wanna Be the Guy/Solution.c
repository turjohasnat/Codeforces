//C Solution:
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int levels[n+1];
    for ( int i = 1; i <= n; i++ ){
        levels[i] = 0;
    }

    int p, level;
    scanf("%d", &p);
    for ( int i = 0; i < p; i++ ){
        scanf("%d", &level);
        levels[level] = 1;
    }

    int q;
    scanf("%d", &q);
    for ( int i = 0; i < q; i++ ){
        scanf("%d", &level);
        levels[level] = 1;
    }

    int allLevelCovered = 1;
    for ( int i = 1; i <= n; i++ ){
        if ( levels[i] == 0 ){
            allLevelCovered = 0;
            break;
        }
    }

    if ( allLevelCovered ) printf("I become the guy.");
    else printf("Oh, my keyboard!");
    return 0;
}
