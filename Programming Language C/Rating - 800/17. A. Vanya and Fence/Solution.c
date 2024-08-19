//C Solution:
#include <stdio.h>
int main() {
    int n, h;
    scanf("%d %d", &n, &h);

    int count = 0;
    for ( int i = 0; i < n; i++ ){
        int a;
        scanf("%d", &a);

        if ( a > h ) count += 2;
        else count++;
    }
    printf("%d", count);
    
    return 0;
}