//C Solution:
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for ( int i = 0; i < t; i++ ){
        int n;
        scanf("%d", &n);

        if ( n % 2 == 0 ){
            if ( n > 2 ) n = n / 2 - 1;
            else n = 0;
        }
        else {
            if ( n > 2 ) n /= 2;
            else n = 0;
        }

        printf("%d\n", n);
    }
    return 0;
}
