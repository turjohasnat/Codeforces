//C Solution:
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    int rating[t];
    for ( int i = 0; i < t; i++ ){
        scanf("%d", &rating[i]);

        if ( rating[i] >= 1900 ){
            printf("Division 1\n");
        }
        else if ( rating[i] >= 1600 && rating[i] < 1900 ){
            printf("Division 2\n");
        }
        else if ( rating[i] >= 1400 && rating[i] < 1600 ){
            printf("Division 3\n");
        }
        else {
            printf("Division 4\n");
        }
    }
    return 0;
}