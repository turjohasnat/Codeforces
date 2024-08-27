//C Solution:
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for ( int i = 0; i < t; i++ ){
        int n;
        scanf("%d", &n);

        int a = n % 10;
        n /= 10;
        int result = a + n;
        printf("%d\n", result);
    }
    return 0;
}