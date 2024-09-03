//C Solution:
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while( t-- ){
        int n;
        scanf("%d", &n);

        int x[n];
        for ( int i = 0; i < n; i++ ){
            scanf("%d", &x[i]);
        }

        if ( n == 2 && x[1] - x[0] > 1 ) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

