//C Solution:
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    for ( int i = 0; i < t; i++ ){
        char st[123];
        scanf("%s", st);

        int len = strlen(st);
        int isSquare = 1;

        if ( len % 2 != 0 ){
            isSquare = 0;
        }
        else {
            int half = len / 2;
            for ( int j = 0; j < half; j++ ){
                if ( st[j] != st[j+half] ){
                isSquare = 0;
                break;
                }
            }
        }
        if ( isSquare ) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}