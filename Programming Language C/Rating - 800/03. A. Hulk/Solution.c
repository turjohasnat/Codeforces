//C Solution:
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for ( int i = 1; i <= n; i++ ){
        printf("I ");
        if ( i % 2 == 0 ) printf("love ");
        else printf("hate ");
        if ( i == n ) printf("it");
        else printf("that ");
    }
    return 0;
}
