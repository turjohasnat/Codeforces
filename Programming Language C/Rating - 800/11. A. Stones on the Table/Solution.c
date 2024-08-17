//C Solution:
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    char string[55];
    int count = 0;
    for ( int i = 0; i <= n; i++ ){
        scanf("%c", &string[i]);
        if ( string[i] == string[i-1]){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}