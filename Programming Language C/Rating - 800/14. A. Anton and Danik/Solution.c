//C Solution:
#include <stdio.h>

const int max = 100023;

int main() {
    int n;
    scanf("%d", &n);

    char win[max];
    int countA = 0, countD = 0;
    for ( int i = 0; i <= n; i++ ){
        scanf("%c", &win[i]);

        if( win[i] == 'A' ) countA++;
        else if( win[i] == 'D') countD++;
    }

    if ( countA > countD ) printf("Anton");
    else if ( countD > countA )printf("Danik");
    else printf("Friendship");

    return 0;
}
