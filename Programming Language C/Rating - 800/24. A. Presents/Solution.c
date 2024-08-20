//C Solution:
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int p[n];
    for ( int i = 0; i < n; i++ ){
        scanf("%d", &p[i]);
    }

    for ( int j = 1; j <= n; j++ ){
        for ( int i = 0; i < n; i++ ){
            if ( p[i] == j ){
                printf("%d ", i+1 );
                break;
            }
        }
    }

    return 0;
}