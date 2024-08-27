//C Solution:
#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    for ( int i = 0; i < t; i++ ){
        int a, b;
        char c;
        scanf("%d%c%d", &a, &c, &b);

        if ( c == '+' ){
            printf("%d\n", a+b);
        }
    }
    return 0;
}