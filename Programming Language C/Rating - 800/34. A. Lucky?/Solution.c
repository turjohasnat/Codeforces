//C Solution:
#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);

    for ( int i = 0; i < t; i++ ){
        char s[8];
        scanf("%s", s);

        int total = 0;
        for ( int j = 0; j < 6; j++ ){
            total += s[j];
        }

        int  first = 0;
        for ( int j = 0; j < 3; j++ ){
            first += s[j];
        }

        int last = total - first;

        if ( first == last ) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}