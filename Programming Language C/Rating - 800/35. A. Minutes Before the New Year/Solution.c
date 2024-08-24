//C Solution:
#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    for ( int i = 0; i < t; i++ ){
        int h, m;
        scanf("%d %d", &h, &m);

        h = 23 - h;
        m = 60 - m;

        int total_min = h * 60 + m;
        printf("%d\n", total_min);
    }
    return 0;
}
