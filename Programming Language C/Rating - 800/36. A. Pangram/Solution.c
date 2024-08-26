//C Solution:
#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);

    char s[t+1];
    scanf(" %s", s);

    int alphabet[26] = {0};
    for ( int  i = 0; i < t; i++ ){
        int ch = s[i];
        if ( ch >= 'A' && ch <= 'Z' ){
            ch += 32;
        }

        if ( ch >= 'a' && ch <= 'z' ){
            alphabet [ch - 'a'] = 1;
        }
    }

    int isProgram = 1;
    for ( int i = 0; i < 26; i++ ){
        if ( alphabet[i] == 0 ){
            isProgram = 0;
            break;
        }
    }

    if ( isProgram ) printf("YES\n");
    else printf("NO\n");

    return 0;
}
