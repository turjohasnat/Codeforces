//C Solution:
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    for ( int i = 0; i < t; i++ ){
        char s[4];
        scanf("%s", s);

        int l = strlen(s);

        for ( int j = 0; j < l; j++ ){
            if ( s[j] >= 'a' && s[j] <= 'z' ){
                s[j] -= 32;
            }
        }

        if ( strcmp( s, "YES" ) == 0 ) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
