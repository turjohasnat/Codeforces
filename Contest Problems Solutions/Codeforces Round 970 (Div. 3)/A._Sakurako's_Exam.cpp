//C Solution:
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for ( int i = 0; i < t; i++ ){
        int a, b;
        scanf("%d %d", &a, &b);

        int result = a + b * 2;
        if ((a == 0 && b % 2 != 0)||(b == 0 && a % 2 != 0)||(result % 2 != 0)){
            printf("NO\n");
        }
        else printf("YES\n");
    }
    return 0;
}
